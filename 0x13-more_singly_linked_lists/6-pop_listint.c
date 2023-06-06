#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: a double pointer to head of the list
 *
 *Return: the head node’s data, 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;

	free(temp);

	return (n);
}

