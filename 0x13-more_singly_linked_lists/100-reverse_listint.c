#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the head list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = NULL;

	while (*head != NULL)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = curr;
	}
	*head = prev;

	return (*head);
}

