#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: s
 */
char *leet(char *s)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char leet_tab[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (leet[j] == s[i])
				s[i] = leet_tab[j];
		}
	}
	return (s);
}
