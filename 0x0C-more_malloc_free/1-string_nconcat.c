#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: input string
 * @s2: input string
 * @n: bytes
 *
 * Return: pointer to new memory, else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0, len2 = 0, totlen, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n >= len2)
		n = len2;

	totlen = len1 + n;

	p = (char *)malloc((totlen + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (i = 0; i < n; i++)
		p[len1 + i] = s2[i];

	p[totlen] = '\0';

	return (p);
}
