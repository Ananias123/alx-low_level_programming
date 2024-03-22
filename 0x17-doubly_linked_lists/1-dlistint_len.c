#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in
 * a double linked list
 * @h: a pointer to the first node of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int add_up;

	add_up = 0;

	if (h == NULL)
		return (add_up);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		add_up++;
		h = h->next;
	}

	return (add_up);
}
