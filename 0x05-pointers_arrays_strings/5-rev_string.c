#include "main.h"

/**
 * rev_string - Entry point- reverses a string
 * @s: input of string to be reversed
 *
 * Return: returns void
 */
void rev_string(char *s)
{
	int x = 0, y = 0;
	char str[500];

	while (*(s + x))
	{
		*(str + x) = *(s + x);
		x++;
	}
	x = x - 1;
	while (x >= 0)
	{
		*(s + x) = *(str + y);
		y++;
		x--;
	}
}
