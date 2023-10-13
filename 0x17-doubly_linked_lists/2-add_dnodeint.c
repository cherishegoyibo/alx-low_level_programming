#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 *
 * @head: head of the list
 * @n: value to add to node
 * Return: the address of the new element, else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;
	*head = tmp;
	if (tmp->next != NULL)
		(tmp->next)->prev = tmp;
	return (tmp);
}
