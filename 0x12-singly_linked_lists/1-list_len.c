#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list
 * @h: pointer to the list_t list
 * Return: number of elements in head node
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
