#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 *
 * Return: no return
 */
void print_triangle(int size)
{
	int a, b, c;

	if (a == 1)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a <= size; a++)
		{
			for (b = 1; b < (size - a); b++)
			{
				_putchar(' ');
			}
			for (c = 0; c < a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
