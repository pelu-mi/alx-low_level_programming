#include "main.h"

/**
 * list_len - Function to return total number of elements in h
 * @h: Linked list to find the total number of elements in
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
