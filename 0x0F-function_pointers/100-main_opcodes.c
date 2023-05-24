#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: arguments
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n_bytes, i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02hhx", ptr[i]);
		if (i < n_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
