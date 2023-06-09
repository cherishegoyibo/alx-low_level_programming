#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: a pointer to the first occurrence of the character, or 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
	{
		return (s);
	}

	return (0);
}
