#include "main.h"

/**
 * get_bit - returns value of bit at a given index
 * @n: variable
 * @index: index of bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * (8 - 1))
		return (-1);
	else
		return ((n >> index) & 1);
}
