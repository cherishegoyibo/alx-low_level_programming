#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a list
 * @head: double pointer to the head list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *curr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (curr->next == NULL)
			return (-1);

		curr = curr->next;
	}

	temp = curr->next;
	curr->next = temp->next;
	free(temp);
	return (1);
}
