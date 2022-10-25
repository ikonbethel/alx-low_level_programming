#include "main.h"
/**
 * puts2 - prints every alternating character of a string
 * @str: the string input
 *
 */
void puts2(char *str)
{
	int x, y;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		;
	}
	for (y = 0 ; y < x ; y += 2)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
