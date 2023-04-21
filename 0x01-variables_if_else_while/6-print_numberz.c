#include <stdio.h>
/**
 * main - Print allsingle digit of base ten using putchar
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');

	return (0);
}
