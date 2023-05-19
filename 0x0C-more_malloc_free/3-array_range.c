#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimun value
 * @max: maximum value
 *
 * Return: pointer to new array, else NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, value = 0;

	if (min > max)
		return (NULL);

	value = max - min + 1;

	ptr = (int *)malloc(value * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < value; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
