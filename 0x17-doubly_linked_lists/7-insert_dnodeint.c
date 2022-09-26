#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert new node into linked list at index idx
 * @h: Head of doubly linked list
 * @idx: index of new node
 * @n: value of new node
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *after, *head = *h;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	while (i < idx)
	{
		if (i == (idx - 1))
			break;
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}

	after = head->next;

	node->n = n;
	node->prev = head;
	node->next = after;

	head->next = node;
	after->prev = node;

	return (node);
}
