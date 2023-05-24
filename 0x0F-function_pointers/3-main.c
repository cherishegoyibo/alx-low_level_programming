#include "3-calc.h"

/**
 * main - perform simple operations
 * @argc: arguments
 * @argv: pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int calc;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	calc = op_func(num1, num2);

	printf("%d\n", calc);

	return (0);
}
