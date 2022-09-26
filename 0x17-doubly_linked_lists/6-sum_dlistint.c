#include "lists.h"

/**
 * sum_dlistint - Return sum of values of doubly linked list elements
 * @head: Doubly linked list
 * Return: Sum of values in doubly linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
