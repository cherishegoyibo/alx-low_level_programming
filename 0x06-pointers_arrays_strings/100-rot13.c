#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: input string
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char aleph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_tab[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (aleph[j] == s[i])
			{
				s[i] = rot_tab[j];
				break;
			}
		}
	}

	return (s);
}
