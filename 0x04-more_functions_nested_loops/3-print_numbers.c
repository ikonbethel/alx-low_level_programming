#include "main.h"

/**
 * print_numbers - This code prints 0123456789\n
 *
 * Return: returns void
 */


void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
