#include "main.h"

/**
* print_alphabet_x10 - This code prints the alphabet 10 times
* in lowercase, followed by a newline
*/
void print_alphabet_x10(void)
{
	int letters, i;

	for (i = 0; i < 10; i++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
