#include "main.h"

/**
 * string_toupper - Entry point- changes lowercase letters to uppercase
 * @s: string to capitalize
 * Return: address of s
 */
char *string_toupper(char *s)
{
	int m = 0;

	while (*(s + m))
	{
		if (*(s + m) >= 'a' && *(s + m) <= 'z')
			*(s + m) -= 'a' - 'A';
		m++;
	}
	return (s);
}
