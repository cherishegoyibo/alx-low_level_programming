#include "main.h"
/**
 * *string_toupper - changes letters from lowercase to uppercase
 * @s: string
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - ('a' - 'A');
		}
	}
	return (s);
}
