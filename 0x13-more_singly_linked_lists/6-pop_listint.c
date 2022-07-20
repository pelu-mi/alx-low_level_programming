#include "lists.h"

/**
 * pop_listint - Function to pop head node in a list
 * @head: pointer to head of list
 * Return: value of new head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	*head = (**head).next;
	free(temp);

	return ((**head).n);
}
