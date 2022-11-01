#include "main.h"

/**
* _memset -Entry point- fills the 1st @n bytes of memory area pointed
* to by @s with the constant byte of @b
* @s: This is the pointer to a memory area
* @b: This is the value that is to fill up memory area @s
* @n: number of bytes of memory area @s to be filled with @b
* Return: returns the pointer to the memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		*(s + y) = b;
	}

	return (s);
}
