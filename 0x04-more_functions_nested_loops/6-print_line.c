#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times to draw the straight line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
