#include "lists.h"

/**
 * delete_dnodeint_at_index - Funcn deletes the node at index of a linked list
 * @head: head of the double linked list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int x;

	head1 = *head;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;

	x = 0;

	while (head1 != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = head2;
			}

			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		x++;
	}

	return (-1);
}
