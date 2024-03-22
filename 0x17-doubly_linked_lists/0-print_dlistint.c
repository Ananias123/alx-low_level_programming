#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a list
 * @h: a pointer to the first node of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int data_list;

	data_list = 0;

	if (h == NULL)
		return (data_list);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		data_list++;
		h = h->next;
	}

	return (data_list);
}
