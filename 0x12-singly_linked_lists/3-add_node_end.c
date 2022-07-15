#include "lists.h"

/**
 * add_node_end - add new node to end of a linked list
 * @head: address of current head
 * @str: value of str for the new node
 * Return: New node element in linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	char *dup_str;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup_str;
	new->len = len;
	new->next = NULL;
	
	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
