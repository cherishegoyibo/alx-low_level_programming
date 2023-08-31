#include "main.h"
/**
 * Rpower - calculate base raised to any power
 * @base: base
 * @power: power
 * Return: base raised to power
 */
unsigned long int Rpower(unsigned int base, unsigned int power)
{
	unsigned long int result;
	unsigned int i;

	result = 1;
	for (i = 1; i <= power; i++)
		result *= base;
	return (result);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, result;
	int flag;

	flag = 0;
	div = Rpower(2, sizeof(unsigned long int) * 8 - 1);

	while (div != 0)
	{
		result = n & div;
		if (result == div)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
