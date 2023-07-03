#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: pointer to array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int index_row = 0;
	int index_column;

	while (index_row < 8)
	{
		index_column = 0;
		while (index_column < 8)
		{
			_putchar(a[index_row][index_column]);
			index_column++;
		}
		index_row++;
		_putchar('\n');
	}
}
