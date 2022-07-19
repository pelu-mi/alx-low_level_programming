#include "lists.h"

/**
 * add_nodeint - Function to add node to beginning of a list
 * @head: pointer to head of list
 * @n: value of new node
 * Return: New list item
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
