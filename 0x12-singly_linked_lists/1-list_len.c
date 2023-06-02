#include "lists.h"

/**
  * list_len - prints number of elements in a linked list
  * @h: linked list
  *
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	size_t l_lenght = 0;

	while (h != NULL)
	{
		h = h->next;
		l_lenght++;
	}

	return (l_lenght);
}
