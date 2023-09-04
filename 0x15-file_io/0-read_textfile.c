#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byteread, bytewrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	byteread = read(fd, buffer, letters);
	close(fd);
	if (byteread == -1)
	{
		free(buffer);
		return (0);
	}

	buffer[byteread] = '\0';
	close(fd);
	bytewrite = write(STDOUT_FILENO, buffer, byteread);
	free(buffer);
	if (bytewrite != byteread)
	{
		return (0);
	}

	return (byteread);
}
