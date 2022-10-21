#include "main.h"

/**
 * print_line - This code print lines of a given length
 * @n: given number of times
 *
 * Return: returns void
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
