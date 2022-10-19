#include "main.h"

/**
 * _islower - Code entry point
 *
 * This program checks for lowercase character.
 *
 * it recieves c as input
 *
 * Return: 0
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* refer in c*/
		if (c == i)
		{
			return (1);
		}

	}
	return (0);
}
