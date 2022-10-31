#include "main.h"

/**
* _strchr -Entry point- finds a character in a string
* @s: The string to check
* @c: The character to find
* Return: returns the Pointer to @s or NULL (if not found)
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
