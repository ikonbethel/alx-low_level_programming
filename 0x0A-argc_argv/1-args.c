#include "main.h"

/**
* print_number - prints number with _putchar
* @num: integer num to be printed
* Return: void
*/

void print_number(int num)
{
	if (num / 10)
		print_number(num / 10);

	_putchar(num % 10 + '0');
}

/**
* main -Main Entry point- Prints the number of arguments passed into it
* @argc: Length of @argv
* @argv: Array of the programs arguments
* Return: returns 0 if Successful
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	print_number(--argc);
	_putchar('\n');
	return (0);
}
