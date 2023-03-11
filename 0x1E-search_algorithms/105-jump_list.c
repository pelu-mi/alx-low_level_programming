#include "search_algos.h"

/**
 * jump_list - Implement jump search with linked list
 * @list: List to be searched
 * @size: Size of list
 * @value: Value to search for
 * Return: First index where value is located or -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current, *after;
	size_t i = 0, j, next, step = floor(sqrt(size));

	if (!list)
		return (NULL);
	current = list;
	while (i < size)
	{
		/* Computation */
		if (value == current->n)
			return (current);
		next = (i + step > size - 1) ? size - 1 : i + step;
		/* Find the next step and check if its less than the value */
		after = current;

		for (j = 0; j < next - i; j++)
			after = after->next;
		printf("Value checked at index [%ld] = [%d]\n", after->index, after->n);
		if (value <= after->n || i + step > size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, i + step);
			/* Check all elements in block */
			while (i <= next)
			{
				printf("Value checked at index [%ld] = [%d]\n", i, current->n);
				if (value == current->n)
					return (current);
				i++;
				current = current->next;
			}
			return (NULL);
		}
		i += step;
		current = after;
	}
	return (NULL);
}
