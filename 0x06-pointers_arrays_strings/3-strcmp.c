#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		i++;
	}
	if *(s1 + i) == *(s2 + i)
	{
		return (0);
	}
	else
	{
		return (*(s1 + i) - *(s2 + i));
	}
}
