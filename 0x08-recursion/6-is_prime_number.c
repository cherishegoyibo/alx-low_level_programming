#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n: input
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	int prime_num(int n, int div);

	if (n <= 1)
	{
		return (0);
	}
	return (prime_num(n, 2));
}
/**
 * prime_num - calculates prime number
 * @n: input number
 * @div: divisor
 *
 * Return: 1 if n is prime, otherwise 0
 */
int prime_num(int n, int div)
{
	if (div == n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (prime_num(n, div + 1));
}
