#include "main.h"

/*
 * free_list - Function to free a list
 * @head: address of first element in list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
