#include "search_algos.h"

/**
 * linear_skip - Implement jump search with linked list with express lane
 * @list: List to be searched
 * @value: Value to search for
 * Return: First index where value is located or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *after;

	if (!list)
		return (NULL);
	current = list;
	while (current->next)
	{
		/* Computation */
		if (value == current->n)
			return (current);
		/* Find the next step and check if its less than the value */
		if (current->express)
			after = current->express;
		else
		{
			after = current;
			while (after->next)
				after = after->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", after->index, after->n);
		if (value <= after->n || !(current->express))
		{
			printf("Value found between indexes [%ld] and [%ld]\n", current->index, after->index);
			/* Check all elements in block */
			while (current)
			{
				printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
				if (value == current->n)
					return (current);
				current = current->next;
			}
			return (NULL);
		}
		current = after;
	}
	return (NULL);
}
