#include "main.h"

/**
 * _isalpha - check alphabetic character
 * @c: value to be checked
 *
 * Return: 1 if letter, lowercase or uppercase, 0 else
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

