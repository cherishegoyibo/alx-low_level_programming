#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals
 * @a: pointer to array
 * @size: size of array
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, m, s1 = 0, s2 = 0;

	m = size * size;

	for (i = 0; i < m; i += size + 1)
	{
		s1 += a[i];
	}
	for (i = size - 1; i < m - 1; i += size - 1)
	{
		s2 += a[i];
	}
	printf("%d, %d\n", s1, s2);
}
