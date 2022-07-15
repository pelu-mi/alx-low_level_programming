#include "lists.h"

/**
 * print_list - function to print out a list
 * @h: list to be printed out
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		i += print_list(h->next);
	}
	return (i)
}
