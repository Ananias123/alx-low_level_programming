#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node in a linked list.
 * @head: pointer to the first node in the list
 * @index: index of the element to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *list = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		j++;
	}
	list = temp->next;
	temp->next = list->next;
	free(list);
	return (1);
}
