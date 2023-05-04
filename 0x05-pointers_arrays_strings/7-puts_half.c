#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string
 *
 * Return: no return
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 1)
		n = (len / 2);
	else
		n = (len - 1) / 2;

	for (len = n; str[len] != '\0'; len++)
		_putchar(str[len]);
	_putchar('\n');
}
