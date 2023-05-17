#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins
 * @argc: input argument
 * @argv: array of pointer
 *
 * Return: 0, else 1
 */
int main(int argc, char **argv)
{
	int cents, bal = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
		{
			cents--;
		}
		bal++;
	}

	printf("%d\n", bal);

	return (0);
}
