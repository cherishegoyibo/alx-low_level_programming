#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char,initialize each element
 * @c: char used to initialize element of array
 * @size: size to allocate
 *
 * Return: pointer to the array, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int ui = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (ui < size)
	{
		ptr[ui] = c;
		ui++;
	}

	ptr[ui] = '\0';

	return (ptr);
}

