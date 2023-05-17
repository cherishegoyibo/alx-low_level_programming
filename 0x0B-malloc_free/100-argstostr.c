#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments in a program
 * @ac: number of arguments passsed
 * @av: pointer to array of strings
 *
 * Return: pointer to a new string, NULL on fail
 */
char *argstostr(int ac, char **av)
{
	int i, j, totlen = 0;
	char *res, *temp;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, totlen++)
			;
		totlen++;
	}
	totlen++;

	res = malloc(totlen * sizeof(char));
	if (res == NULL)
		return (NULL);

	temp = res;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*res = av[i][j];
			res++;
		}
		*res = '\n';
		res++;
	}

	return (temp);
}
