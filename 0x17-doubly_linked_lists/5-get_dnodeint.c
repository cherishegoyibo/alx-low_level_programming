#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a double linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node
 *
 * Return: nth node, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
