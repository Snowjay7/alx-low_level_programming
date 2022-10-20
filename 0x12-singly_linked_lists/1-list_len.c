#include "lists.h"

/**
 * list_len - determines the number of elements in a linked list_t list
 * @h: the list_t linked list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}

	return (element);
}
