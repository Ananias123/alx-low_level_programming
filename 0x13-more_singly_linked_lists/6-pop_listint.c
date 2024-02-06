#include "lists.h"

/**
 * pop_listint -A function that deletes the head node of a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: the data inside the node that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_pointer;
	int number;

	if (!head || !*head)
		return (0);
	number = (*head)->n;
	temp_pointer = (*head)->next;
	free(*head);
	*head = temp_pointer;

	return (number);
}
