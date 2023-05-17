#include <stdio.h>

/**
 * main - print numer of arguments
 * @argc: input argument
 * @argv: array of pointer
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
