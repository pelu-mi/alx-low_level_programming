#include "lists.h"

/**
 * insert_nodeint_at_index - Function to insert new node at index idx in a list
 * @head: pointer to head of list
 * @idx: index of new node
 * @n: 
 * Return: pointer to nth node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
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
