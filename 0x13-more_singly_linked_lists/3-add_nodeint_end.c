#include "lists.h"

/**
 * add_nodeint_end - Function to add node to end of a list
 * @head: pointer to head of list
 * @n: value of new node
 * Return: New list item
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (head)
			head = head->next;
		*head = new;
	}

	return (new);
}
