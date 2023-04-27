#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int n;
	long int a = 0, b = 1, next;

	for (n = 0; n < 50; n++)
	{
		next = a + b;
		printf("%ld", next);

		a = b;
		b = next;

		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
