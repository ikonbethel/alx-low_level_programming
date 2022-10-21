#include "main.h"

/**
 * print_triangle - This code prints a triangle .
 * @size: Is the given height of triangle .
 *
 * Return: returns void
 */


void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y <= (size - x))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

}
