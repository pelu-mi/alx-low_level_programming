#include "lists.h"

/**
 * print_listint - Function to print out all the elements in a linked list
 * @h: list to print elements from
 * Return: Size of the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;

		num++;
	}

	return (num);
}
