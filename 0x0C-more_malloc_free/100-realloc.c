#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous memory
 * @old_size: size in bytes of allocated space fior ptr
 * @new_size: new size in bytes of new memory block
 *
 * Return: return ptr, NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_p;
	char *old_p;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	new_p = malloc(new_size);
	if (new_p == NULL)
	{
		return (NULL);
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_p[i] = old_p[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_p[i] = old_p[i];
	}

	free(ptr);
	return (new_p);
}
