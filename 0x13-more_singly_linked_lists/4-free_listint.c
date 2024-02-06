#include "lists.h"

/**
 * free_listint -A function that frees a linked list
 * @head: pointer to the first node of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp_pointer;

	while (head)
	{
		temp_pointer = head->next;
		free(head);
		head = temp_pointer;
	}
}
