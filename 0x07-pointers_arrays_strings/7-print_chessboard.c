#include "main.h"

/**
* print_chessboard -Entry point- This code prints a chessboard
* @a: Double pointer
* Return: returns 0
*/
void print_chessboard(char (*a)[8])
{
	unsigned int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	} return (0);

}
