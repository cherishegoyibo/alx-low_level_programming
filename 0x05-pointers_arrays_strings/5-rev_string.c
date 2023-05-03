#include "main.h"
/**
 * rev_string - reverse a string
 * @s: input string
 *
 * Return: no return
 */
void rev_string(char *s)
{
	int i = 0, j, k;
	char a;

	while (s[i] != '\0')
	{
		i++;
	}
	k = a - 1;
	for (j = 0; k >= 0 && j < k; k--, j++)
	{
		a = s[j];
		s[j] = s[k];
		s[k] = a;
	}
}
