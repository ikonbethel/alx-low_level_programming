#include "main.h"

/**
* _strstr - Locating a substring
* @needle: string to be found
* @haystack: string to be searched
* Return: returns pointer to occurrence of string
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
