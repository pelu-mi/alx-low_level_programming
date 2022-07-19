#include "lists.h"

/**
 * free_listint2 - Function to free all nodes in a list
 * 		 and set head to NULL
 * @head: pointer to head of list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	*head = NULL;
}
