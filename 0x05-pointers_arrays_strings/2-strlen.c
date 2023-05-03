#include "main.h"
/**
 * _strlen - return lenght of a string
 * @s: string pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s+len) != 0)
	{
		len++;
	}
	return (len);
}
