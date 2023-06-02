#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: Linked list
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	size_t lenght;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	for (lenght = 0; str[lenght] != '\0'; lenght++)
		;

	n_node->len = lenght;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
