#include "lists.h"

/**
 * add_dnodeint - Add node to the beginning of a doubly linked list
 * @head: Doubly linked list
 * @n: Value of new node
 * Return: Address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head != NULL)
		(*head)->prev = node;
	*head = node;
	return (node);
}
