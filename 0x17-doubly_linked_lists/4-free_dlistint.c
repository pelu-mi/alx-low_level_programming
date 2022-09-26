#include "lists.h"

/**
 * free_dlistint - Free memory allocated to doubly linked list
 * @head: Address of first element of doubly linked list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}	
}
