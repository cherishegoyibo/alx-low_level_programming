#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: input string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1, i = 0, res = 0;

	while (s[i])
	{
		if (s[i] == '+')
		{
			sign *= 1;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = (res * 10) + (s[i] - '0');
			i++;
		}
		else if (res != 0)
		{
			break;
		}
		i++;
	}

	res *= sign;
	return (res);
}
