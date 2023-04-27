#include <stdio.h>
/**
 * main - print fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	unsigned long a = 0, b = 1, next;
	float sum;

	while (1)
	{
		next = a + b;
		if (next > 4000000)
			break;

		if ((next % 2) == 0)
			sum = sum + next;

		a = b;
		b = next;
	}
	printf("%.0f\n", sum);

	return (0);
}
