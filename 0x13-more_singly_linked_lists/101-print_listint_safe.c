#include "lists.h"

/**
 * print_listint_safe - prints a list
 * @head: pointer to head list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *curr = head;
	size_t count;

	while (curr)
	{
		printf("%d\n", curr->n);
		count++;

		if (curr <= curr->next)
		{
			printf("-> [%p] %d\n", (void *)curr->next, curr->next->n);
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			exit(98);
		}

		curr = curr->next;
	}

	return (count);
}
