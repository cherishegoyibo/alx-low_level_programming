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

	tmp = head;
	while (tmp != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
