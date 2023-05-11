#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: input
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	int nat_sqrt_recursion(int n, int sq);

	int sq = 1;

	if (n < 0)
	{
		return (-1);
	}
	return (nat_sqrt_recursion(n, sq));
}
/**
 * nat_sqrt_recursion - natural square root of a number
 * @n: input number
 * @sq: square root
 *
 * Return: natural square root
 */
int nat_sqrt_recursion(int n, int sq)
{
	if (sq * sq > n)
	{
		return (-1);
	}
	if (sq * sq == n)
	{
		return (sq);
	}
	return (nat_sqrt_recursion(n, sq + 1));
}
