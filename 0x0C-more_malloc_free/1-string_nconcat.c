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
	unsigned int num, len, nlen;
	int i;

	if (s1 == NULL)
	{
		len = 0;
	}
	else
	{
		for (len = 0; s1[len]; ++len)
			;
	}
	if (s2 == NULL)
	{
		num = 0;
	}
	else
	{
		for (num = 0; s2[num]; ++num)
			;
	}
	nlen = num + len;
	if (num > n)
		num = n;
	p = malloc((nlen + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = s1[i];
	for (i = 0; i < num; i++)
		p[len + i] = s2[i];

	p[nlen] = '\0';

	return (p);
}
