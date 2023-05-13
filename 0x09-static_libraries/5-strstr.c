#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: substring
 *
 * Return: pointer to begining of substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	while (*haystack != '\0')
	{
		s1 = haystack;
		s2 = needle;

		while (*s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}

		if (*s2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
