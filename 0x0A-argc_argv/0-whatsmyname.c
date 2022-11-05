#include "main.h"
#include <stdio.h>

/**
* print_string - Prints all char of a string
* @str: Pointer to string input
* Return: void
*/

void print_string(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		putchar(str[x]);
		x++;
	}
}

/**
* main -Main Entry point- Prints name of command
* @argc: Length of argv
* @argv: Array program's arguments
* Return: returns 0 as successful.
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	print_string(argv[0]);
	putchar('\n');

	return (0);
}
