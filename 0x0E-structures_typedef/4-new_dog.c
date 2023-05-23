#include <stdio.h>
#include "dog.h"

/**
 * _strlen - return lenght of a string
 * @s: string pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != 0)
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - copies string pointed to
 * @dest: first char
 * @src: second char
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (len1 + 1));
	newdog->owner = malloc(sizeof(char) * (len2 + 1));
	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		free(newdog->owner);
		return (NULL);
	}
	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}
