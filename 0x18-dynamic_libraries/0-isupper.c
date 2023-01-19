#include "main.h"

/**
 * _isupper - This function that checks for uppercase character.
 * @c: The variable input type is int
 * Return: It returns 1 for uppercase and  0 otherwise
 */
int _isupper(int c)
{
	if (c >=  'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
