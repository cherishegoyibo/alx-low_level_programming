#include "main.h"

/**
 * _memset - fills the  memory area pointed to with a constant byte
 * @s: source address
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
