#include <stdio.h>
#include "lists.h"

/**
 * print_list -A function that prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: elements
 */
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elements++;
	}
	return (elements);
}
