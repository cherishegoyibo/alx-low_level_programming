#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 *
 * Return: no return
 */
void print_triangle(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if ((a + b) <= size)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
