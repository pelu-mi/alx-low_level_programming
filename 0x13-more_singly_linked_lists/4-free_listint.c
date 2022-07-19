#include "lists.h"

/**
 * free_listint - Function to free all nodes in a list
 * @head: pointer to head of list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
