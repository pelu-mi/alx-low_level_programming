#include "3-calc.h"

/**
 * op_add - Function to add two numbers
 * @a: number to add
 * @b: number to add
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Function to subtract b from a
 * @a: number to subtract from
 * @b: number to be subtracted
 * Return: Difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Function to multiply a and b
 * @a: number to be multiplied
 * @b: number to be multiplied
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Function to divide a by b
 * @a: Dividend
 * @b: divisor
 * Return: Quotient of division
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - Function to find the remainder of a division
 * @a: Dividend
 * @b: Divisor
 * Return: Remainder of division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
