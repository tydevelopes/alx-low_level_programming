#include "main.h"
#include <string.h>

/**
 * print_chessboard - prints a chessboard
 * @a: array of 8 character pointers
 * *(a[i] + j) == *(*(a + i) + j) == a[i][j]
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int row = 8;
	int col = row;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			_putchar(*(a[i] + j));
		_putchar('\n');
	}
}
