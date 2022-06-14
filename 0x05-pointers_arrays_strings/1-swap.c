#include "main.h"

/**
 * swap_int - Swap two variables
 * @a: Variable to be swapped
 * @b: Variable to be swapped
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
