#include <stdlib.h>
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
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		free(dog->owner);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
