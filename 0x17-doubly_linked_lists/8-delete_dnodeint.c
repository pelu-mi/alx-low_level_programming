#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at index in Doubly linked list
 * @head: Head of linked list
 * @index: Index of node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = *head, *p, *n;

	if (node == NULL)
		return (-1);
	if (index == 0)
	{
		n = node->next;
		if (n == NULL)
		{
			*head = NULL;
			return (1);
		}
		n->prev = NULL;
		*head = node->next;
		return (1);
	}
	while (i <= index)
	{
		if (i == index)
			break;
		if (node == NULL)
			return (-1);
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (-1);

	p = node->prev;
	n = node->next;

	p->next = n;
	n->prev = p;

	/*free(node);*/

	return (1);
}
