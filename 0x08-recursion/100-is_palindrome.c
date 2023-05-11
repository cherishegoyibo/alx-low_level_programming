#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: input string
 *
 * Return: 1 if string is a palindrome, otherwise o
 */
int is_palindrome(char *s)
{
	int _palindrome(char *s, int i, int j);
	int _strlen_recursion(char *s);

	if (*s == 0)
	{
		return (1);
	}
	return (_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - length of string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome - check if char is palindrome
 * @s: input string
 * @i: index
 * @j: lenght
 *
 * Return: 1 if string is a palindrome, otherwise 0
 */
int _palindrome(char *s, int i, int j)
{
	if (s[1] != s[j - 1])
	{
		return (0);
	}
	if (i > j / 2)
	{
		return (1);
	}
	return (_palindrome(s, i + 1, j - 1));
}
