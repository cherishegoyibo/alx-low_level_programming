#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: source memory
 * @dest: destination memory
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ui = 0;

	while (ui < n)
	{
		dest[ui] = src[ui];
		ui++;
	}

	return (dest);
}
