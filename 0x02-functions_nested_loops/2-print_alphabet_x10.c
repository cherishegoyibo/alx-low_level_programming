#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times lower alphabet
 *
 */
void print_alphabet_x10(void)
{
	int num;
	char aleph;

	for (num = 0; num <= 9; num++)
	{
		for (aleph = 'a'; aleph <= 'z'; aleph++)
			_putchar(aleph);
		_putchar('\n');
	}
}
