#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: a pointer to the first occurrence of the character, or 0
 */
char *_strchr(char *s, char c);
{
	char *p = s;

	while (*p != c)
	{
		if (*p == c)
			return (p);
	}
	p++
	{
		if (c == '\0')
			return (p);
	}

	return (NULL);
}
