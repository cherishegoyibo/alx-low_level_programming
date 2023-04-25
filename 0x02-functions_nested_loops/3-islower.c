#include "main.h"

/**
 * _islower - check if a character is lowercase
 * @c: The value to check if lower or upper
 *
 * Return: 1 if lowercase, 0 else.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
