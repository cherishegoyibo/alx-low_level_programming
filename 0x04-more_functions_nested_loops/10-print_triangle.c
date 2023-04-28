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

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = o; a <= size; a++)
		{
			for (b = size - a; b >= 1; b--)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
