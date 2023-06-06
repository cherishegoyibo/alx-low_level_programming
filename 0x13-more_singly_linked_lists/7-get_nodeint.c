#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node of a linked list
 * @head: pointer to the head of the list
 * @index: The index of the node
 *
 * Return: the nth node, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
