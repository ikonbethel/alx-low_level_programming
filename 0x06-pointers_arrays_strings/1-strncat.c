#include "main.h"

/**
 * _strncat -Entry point- appends src to the dest string
 * @dest: string input to be appended by src
 * @src: string input to append to dest
 * @n: largest number of bytes to append
 *
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = y = 0;
	while (*(dest + x))
		x++;
	while (y < n && *(src + y))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	if (y < n)
		*(dest + x) = *(src + y);
	return (dest);
}
