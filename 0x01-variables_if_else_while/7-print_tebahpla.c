#include <stdio.h>
/**
 * main - Prints lowercase alphabets in reverse using putchar
 *
 * Return: (0)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
