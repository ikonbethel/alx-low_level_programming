#include "main.h"

/**
 * rot13 - encodes a string input using rot13 encryption
 * @s: string input to be encoded
 * Return: address of s
 */
char *rot13(char *s)
{
	int x, y;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (a[y] == *(s + x))
			{
				*(s + x) = n[y];
				break;
			}
		}
	}
	return (s);
}
