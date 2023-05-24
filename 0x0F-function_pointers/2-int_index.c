#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array of int
 * @size: number of elements in array
 * @cmp: pointer to the function used
 *
 * Return: index of first element, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
