#include "main.h"

/**
 * print_alphabet - entry point
 * Description: A function to print lowercase alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	char aleph;

	for (aleph = 'a'; aleph <= 'z'; aleph++)
		_putchar(aleph);

	_putchar('\n');

}
