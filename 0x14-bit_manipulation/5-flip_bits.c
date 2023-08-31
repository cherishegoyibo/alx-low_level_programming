#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count = count + (result & 1);
		result >>= 1;
	}

	return (count);
}
