#include "main.h"

/**
 * print_chessboard - function to print a chess board
 * @a: chess board design
 * Return: Nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, j;


	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j % 7 == 0)
				_putchar('\n');
			_putchar(*(a + i)[j]);
		}
	}
}
