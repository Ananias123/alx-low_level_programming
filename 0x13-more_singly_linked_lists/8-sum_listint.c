#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data in a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}
	return (add);
}
