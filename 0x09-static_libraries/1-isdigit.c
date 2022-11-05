#include "main.h"

/**
 * _isdigit - This checks for characters that are digits
 * @c: character input type is int
 *
 * Return: This returns 0 or 1 (false or true)
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
