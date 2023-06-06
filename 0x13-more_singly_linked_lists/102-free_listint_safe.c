#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: list to free
 *
 * Return: size of list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count = 0;

	while (*h != NULL)
	{
		temp = *h;
		(*h) = (*h)->next;
		free(temp);
		count++;
	}
	*h = NULL;

	return (count);
}
