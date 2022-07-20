#include "lists.h"

/**
 * sum_listint - Function to sum all the elements in a linked list
 * @head: head of the linked list
 * Return: Sum of all elements in the linked list.
 */

int sum_listint(listint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
