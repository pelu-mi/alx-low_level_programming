#include "lists.h"

/**
 * pop_listint - Function to pop head node in a list
 * @head: pointer to head of list
 * Return: value of new head node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int num = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (num <= index)
	{
		if(num == index)
			break;
		if (!temp)
			return (NULL);
		temp = temp->next;
		num++;
	}
	if (!temp)
		return (NULL);
	else
		return (temp);
}
