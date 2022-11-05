#include "main.h"

/**
 * _memcpy -Entry point-  Copies content from the
 *  Source to destination memory area
 * @src: Source memory area
 * @dest: Destination memory area
 * @n: Number of bytes to copy
 *
 * Return: returns the pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}

	return (dest);
}
