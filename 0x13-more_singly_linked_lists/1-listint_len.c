#include "lists.h"

/**
 * listint_len - Function to return the number of elements in a linked list
 * @h: list to print elements from
 * Return: Size of the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
