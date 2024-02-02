#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A function that adds a new node at
 * The beginning of a list_t list.
 * @head: double pointer to the list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	unsigned int length = 0;

	while (str[length])
		length++;
	list = malloc(sizeof(list_t));

	if (!list)
		return (NULL);
	list->str = strdup(str);
	list->len = length;
	list->next = (*head);
	(*head) = list;
	return (*head);
}

