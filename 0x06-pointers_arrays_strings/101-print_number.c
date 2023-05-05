#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned  int m

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	m = n;

	if (m / 10)
		print_number(m / 10);

	_putchar(m % 10 + '0');
}
