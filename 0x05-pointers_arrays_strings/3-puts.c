#include "main.h"
/**
 * _puts - Entry point- prints a string
 * @str: the string input
 *
 * Return: returns the length of a string
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
