#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: double pointer to the begining of a list
 * @n: value of node to add
 *
 * Return: the address of the new element, else NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	tmp = *head;
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = tmp;

	return (new);

}
