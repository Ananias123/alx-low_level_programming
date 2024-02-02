#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -A function that adds a new node at the end of a linked list
 * @head: double pointer to the list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *element;
	list_t *node = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	element = malloc(sizeof(list_t));
	if (!element)
		return (NULL);
	element->str = strdup(str);
	element->len = len;
	element->next = NULL;

	if (*head == NULL)
	{
		*head = element;
		return (element);
	}

	while (node->next)
		node = node->next;
	node->next = element;
	return (element);
}
