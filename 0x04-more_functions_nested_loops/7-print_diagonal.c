#include "main.h"

/**
 * print_diagonal - This code prints lines diagonally.
 * @n: input variable i.e for a given number of times
 *
 * Return: returns void
 */


void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
