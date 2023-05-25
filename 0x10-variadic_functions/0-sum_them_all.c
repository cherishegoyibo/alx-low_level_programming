#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: number of parameters
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbs;
	int sum;
	unsigned int i;

	va_start(numbs, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(numbs, int);

	va_end(numbs);

	return (sum);
}
