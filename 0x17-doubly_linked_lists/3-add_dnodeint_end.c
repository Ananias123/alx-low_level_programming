#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end of a list
 * @head: The first node of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *first_node;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	first_node = *head;

	if (first_node != NULL)
	{
		while (first_node->next != NULL)
			first_node = first_node->next;
		first_node->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = first_node;

	return (new_node);
}
