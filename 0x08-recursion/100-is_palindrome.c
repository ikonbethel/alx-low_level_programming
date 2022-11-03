#include "main.h"

/**
* palind2 - obtains length of a string input
* @a: string input
* @len: integer to count length
* Return: On success 1 or -1 and error number set on fail
*/

int palind2(char *a, int len)
{
	if (*a == 0)
		return (len - 1);
	return (palind2(a + 1, len + 1));
}

/**
* palind3 - compares string and its reverse
* @a: string
* @len: length
* Return: On 1 if successful or -1 and error number on fail
*/

int palind3(char *a, int len)
{
	if (*a != *(a + len))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, len - 2));
}

/**
* is_palindrome -Code Entry point- checks if string is palindrome
* @s: string to check
* Return: returns 1 on success 1 or -1 and error number on fail
*/

int is_palindrome(char *s)
{
	int len;

	len = palind2(s, 0);
	return (palind3(s, len));
}
