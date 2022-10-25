#include "main.h"
/**
 * puts_half - Entry point- prints half of a string
 * @str: the string input
 *
 *
 */
void puts_half(char *str)
{
	int x = 0;
	int y;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 0)
	{
		x /= 2;
	}
	else
	{
		x = (x + 1) / 2;
	}
	while (str[x] != '\0')
	{
		y = str[x];
		x++;
		_putchar(y);
	}
	_putchar('\n');
}
