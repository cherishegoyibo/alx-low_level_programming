#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 * @head: pointer to begining of list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
