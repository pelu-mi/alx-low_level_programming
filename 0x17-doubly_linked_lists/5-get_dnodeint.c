#include "lists.h"

/**
 * get_dnodeint_at_index - Function to return node at index
 * @head: Address of head of linked list
 * @index: Index of node to be returned
 * Return: Node with index or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int n = 0;

	if (node == NULL)
		return (NULL);

	while (n <= index)
	{
		if (n == index)
			break;
		if (node == NULL)
			return (NULL);
		node = node->next;
		n++;
	}

	return (node);
}
