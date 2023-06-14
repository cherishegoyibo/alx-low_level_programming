#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE 1024

/**
 * print_error - handles error cases
 * @status: status of operation
 * @fd: file descriptor associated with the file
 * @filename: the name of the file
 * @mode: mode of operation as open, write or close
 *
 * Return: void
 */
void print_error(int status, int fd, char *filename, char mode)
{
	if (mode == 'O' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	else if (mode == 'C' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: array of argument passed
 *
 * Return: 1 on success, else exit
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t byte_read, byte_write;
	char buffer[BUFF_SIZE];
	mode_t old_umask = umask(0);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	print_error(fd_from, -1, argv[1], '0');

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	umask(old_umask);
	print_error(fd_to, -1, argv[2], 'W');

	while ((byte_read = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		if (byte_read == -1)
			print_error(-1, -1, argv[1], 'O');

		byte_write = write(fd_to, buffer, byte_read);
		if (byte_write == -1)
			print_error(-1, -1, argv[2], 'W');
	}

	if (close(fd_from) == -1)
		print_error(-1, fd_from, NULL, 'C');

	if (close(fd_to) == -1)
		print_error(-1, fd_to, NULL, 'C');

	return (0);
}
