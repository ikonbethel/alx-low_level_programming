#include "main.h"

/**
 * _strcmp -Entry point-  compares two strings
 * @s1: first string input
 * @s2: second string input
 *
 * Return: returns the difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int m = 0;

	while (*(s1 + m) && *(s2 + m) && (*(s1 + m) == *(s2 + m)))
		m++;
	return (*(s1 + m) - *(s2 + m));
}
