#include <stdio.h>
/**
 * main -Print all single digit numbers of base ten
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf('\n');
	return (0);
}
