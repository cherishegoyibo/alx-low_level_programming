#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: source string
 *
 * Return: pointer to the duplicate, NULL on insufficient memory
 */
char *_strdup(char *str)
{
	char *dup;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	dup = (char *)malloc((size + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}
	dup[size] = '\0';

	return (dup);
}
