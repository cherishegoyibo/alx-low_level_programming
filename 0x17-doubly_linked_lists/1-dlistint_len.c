#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of list
 *
 * Return: the number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)

{
	size_t l_lenght = 0;

	while (h != NULL)
	{
		h = h->next;
		l_lenght++;
	}

	return (l_lenght);
}
