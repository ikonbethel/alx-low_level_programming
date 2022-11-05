#include "main.h"

/**
* print_array_elements - Prints char of a string
* @str: Pointer to string input
* Return: returns void
*/

void print_array_elements(char *str)
{
	int x = 0;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
}

/**
* main -Main Entry point- Prints all arguments it receives
* @argc: integer Length of @argv
* @argv: Array of the input arguments
* Return: returns 0 if Successful
*/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		print_array_elements(argv[x]);
		_putchar('\n');
	}

	return (0);
}
