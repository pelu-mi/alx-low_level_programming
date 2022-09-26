#include "lists.h"

/**
 * dlistint_len - Return number of doubly linked list elements
 * @h: Doubly linked list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
