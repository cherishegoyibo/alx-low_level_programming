#include "main.h"
#include <stdlib.h>

/**
 * count_word - count number of words
 * @str: string to count
 *
 * Return: word count
 */
int count_word(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	return (count);
}

/**
 * strtow - splits a spring into two words
 * @str: input string
 *
 * Return: pointer to array of strings, else NULL
 */
char **strtow(char *str)
{
	char **word, *temp;
	int i, j = 0, k = 0, count, strlen = 0, start, end;

	while (*(str + strlen))
		strlen++;
	count = count_word(str);
	if (count == 0)
		return (NULL);

	word = (char **)malloc((count + 1) * (sizeof(char *)));
	if (word == NULL)
		return (NULL);

	for (i = 0; i <= strlen; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				temp = (char *)malloc(sizeof(char) * (j + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				word[k] = temp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}

	word[k] = NULL;

	return (word);
}
