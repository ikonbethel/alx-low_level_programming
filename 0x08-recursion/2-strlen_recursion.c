#include "main.h"

/**
* _strlen_recursion -Entry point- Returns the length of a string input
* @s: The string whose length is to be returned
* Return: returns length of @s as integer
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
