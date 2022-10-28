#include "main.h"

/**
 * _strncpy - Entry point -copies n bytes of src to the dest string
 * @dest: string input to copy to
 * @src: string input being copied
 * @n: largest number of bytes to copy
 * Return: returns address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && *(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}
	return (dest);
}
