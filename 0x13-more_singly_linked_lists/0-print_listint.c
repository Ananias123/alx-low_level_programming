#include "lists.h"

/**
 * print_listint -A function that prints all the elements of a linked list
 * @h: A pointer to the first node of listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t Num_elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		Num_elements++;
		h = h->next;
	}
	return (Num_elements);
}
