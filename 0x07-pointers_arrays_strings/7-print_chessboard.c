#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: Is an 8-dimensional array (8 x 8)
 *
 */

void print_chessboard(char (*a)[8])
{
	int x, i = 0;

	for (x = 0; x < 8; x++)
	{
		_putchar(a[i][x]);
		if (x == 7 && i < 7)
		{
			i++;
			x = -1;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
