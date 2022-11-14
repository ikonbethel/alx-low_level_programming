#include <stdio.h>

/**
* main - Entry Point- print name of file from which it is compiled from
* Return: returns (0) as succesful
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
