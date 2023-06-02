#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: of linked list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *c_node;
	size_t lenght;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	for (lenght = 0; str[lenght] != '\0'; lenght++)
		;

	n_node->len = lenght;
	n_node->next = NULL;
	c_node = *head;

	if (c_node == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (c_node->next != NULL)
			c_node = c_node->next;
		c_node->next = n_node;
	}

	return (n_node);
}
