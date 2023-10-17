#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input segment
 * @accept: input
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (b = 0; s[b] != '\0'; b++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[b] == accept[a])
				break;
		}
	if (accept[a] == '\0')
		return (b);
	}
	return (b);
}
