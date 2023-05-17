#include <stdio.h>

/**
 * main - print all arguments recieved
 * @argc: input argument
 * @argv: array of pointer
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
