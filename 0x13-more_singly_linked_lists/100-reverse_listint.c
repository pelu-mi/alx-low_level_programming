#include "lists.h"

/**
 * reverse_listint - Function to reverse a list
 * @head: pointer to head of list
 * Return: pointer to new head of list
 */

listint_t *reverse_listint(listint_t **head);
{
	listint_t *new, *temp;
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	if (idx == 0)
	{
		temp = *head;
		*head = new;
		new->next = temp;
		return (new);
	}
	while (num <= idx)
	{
		if (num == (idx - 1))
			break;
		if (!temp)
			return (NULL);
		temp = temp->next;
		num++;
	}
	if (!temp)
		return (NULL);
	new->next = temp->next;
	temp->next = new;
	return (new);
}
