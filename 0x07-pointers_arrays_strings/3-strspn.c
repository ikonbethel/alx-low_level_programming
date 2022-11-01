#include "main.h"
#include <stdio.h>

/**
* _strspn -Entry point- This gets the length of the prefix substring
* @s: The character to print
* @accept: Character
* Return: this returns an unsigned int value
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
				return (x);
		}

	}

	return (x);

}
