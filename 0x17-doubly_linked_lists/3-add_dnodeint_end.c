#include "lists.h"

/**
 * add_dnodeint_end - Add node to the end of a doubly linked list
 * @head: Doubly linked list
 * @n: Value of new node
 * Return: Address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *last = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	
	if (last == NULL)
	{
		node->n = n;
        	node->prev = NULL;
        	node->next = NULL;

		*head = node;
		return (node);
	}
	while (last->next)
		last = last->next;

	node->n = n;
	node->prev = last;
	node->next = NULL;

	last->next = node;

	return (node);
}
