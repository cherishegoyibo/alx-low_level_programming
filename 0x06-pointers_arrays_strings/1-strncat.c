#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination char
 * @src: source char
 * @n: amount of bytes used from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
