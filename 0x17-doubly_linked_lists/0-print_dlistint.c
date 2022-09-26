#include "lists.h"

/**
 * print_dlistint - Print all doubly linked list elements
 * @h: Doubly linked list to print out all elements
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
