#include "lists.h"

/**
 * listint_len - A function that returns the number of elements.
 * @h: pointer to the first node
 *
 * Return: number of nodes in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t ele_number = 0;

	while (h)
	{
		ele_number++;

		h = h->next;
	}
	return (ele_number);
}
