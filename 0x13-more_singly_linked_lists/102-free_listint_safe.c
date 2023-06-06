#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: list to free
 *
 * Return: size of list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *curr;
	size_t count = 0;

	curr = *h;
	while (curr != NULL)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
		count++;
	}
	*h = NULL;

	return (count);
}
