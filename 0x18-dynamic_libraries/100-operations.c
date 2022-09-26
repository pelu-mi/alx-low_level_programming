#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - Add 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: sum of a and b
 */

int add(int a, int b)
{
        return (a + b);
}


/**
 * sub - Subtract 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: a - b
 */

int sub(int a, int b)
{
	return (a - b);
}


/**
 * mul - multiply 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: a * b
 */

int mul(int a, int b)
{
        return (a * b);
}


/**
 * div - Divide 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: a / b
 */

int div(int a, int b)
{
        return (a / b);
}


/**
 * mod - Find remainder after dividing 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: a % b
 */

int mod(int a, int b)
{
        return (a % b);
}
