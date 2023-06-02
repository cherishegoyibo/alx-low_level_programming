#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: linked list head
 *
 * Return: null
 */

void free_list(list_t *head)
{
	list_t *c_node;

	while (head != NULL)
	{
		c_node = head;
		head = head->next;
		free(c_node->str);
		free(c_node);
	}
}
