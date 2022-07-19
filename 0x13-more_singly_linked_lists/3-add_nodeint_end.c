#include "lists.h"

/**
 * add_nodeint_end - Function to add node to end of a list
 * @head: pointer to head of list
 * @n: value of new node
 * Return: New list item
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}

	return (new);
}
