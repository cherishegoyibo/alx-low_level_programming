#include "lists.h"

/**
 * sum_dlistint - sums all of the data(n) of a linked list
 * @head: pointer to the beginning of the list
 *
 * Return: sum of all data,else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
