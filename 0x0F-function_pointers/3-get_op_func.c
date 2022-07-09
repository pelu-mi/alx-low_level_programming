#include "3-calc.h"
#include "3-op_functions.c"

/**
 * get_op_func - Pointer function to return the correct
 * function call based on the right input
 * @s: Character input
 *
 * Return: correct function to use based on input character
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}
