#include "main.h"

/**
 * cap_string -Entry point- capitalizes all words in a string
 * @s: string input to capitalize
 * Return: returns the address of s
 */
char *cap_string(char *s)
{
	int x = 0, y;
	char m[] = " \t\n,;.!?\"(){}";

	while (*(s + x))
	{
		if (*(s + x) >= 'a' && *(s + x) <= 'z')
		{
			if (x == 0)
				*(s + x) -= 'a' - 'A';
			else
			{
				for (y = 0; y <= 12; y++)
				{
					if (m[y] == *(s + x - 1))
						*(s + x) -= 'a' - 'A';
				}
			}
		}
		x++;
	}
	return (s);
}
