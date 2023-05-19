#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements in array
 * @size: bytes of each array
 *
 * Return: pointer to allocated memory, else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i, totsize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	totsize = nmemb * size;

	ptr = malloc(totsize);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < totsize; i++)
	{
		*((char *)(ptr) + 1) = 0;
	}

	return (ptr);
}
