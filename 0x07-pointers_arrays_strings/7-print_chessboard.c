#include "main.h"

/**
 * print_chessboard - function to print a chess board
 * @a: chess board design
 * Return: Nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, j;


	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{	
			_putchar('\n');
			j = i;
		}
		_putchar(a[i / 8][i - j]);
	}

	_putchar('\n');
}
