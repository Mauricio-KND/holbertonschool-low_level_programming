#include "holberton.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Array that contains the chessboard. 2D array [8] columns.
 */

void print_chessboard(char (*a)[8])
{
	int row, column;
	char square;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			square = a[row][column];
			_putchar(square);
		}
		_putchar('\n');
	}
}
