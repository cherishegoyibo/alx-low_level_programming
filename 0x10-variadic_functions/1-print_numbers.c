#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: number of parameters
 * @separator: separates between two numbers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int i;

	va_start(numbs, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbs, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	va_end(numbs);

	printf("\n");
}
