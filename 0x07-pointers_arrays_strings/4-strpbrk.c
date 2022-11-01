#include "main.h"

/**
* _strpbrk -Entry point- Searches a string for any of a set of bytes
* @s: Character to check
* @accept: ccharacter input to look for
* Return: returns  the character
*/
char *_strpbrk(char *s, char *accept)
{
	int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
				return (s + m);
		}
	}
	return (0);
}
