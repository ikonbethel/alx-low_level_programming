#include "main.h"

/**
* factorial -Entry point - Returns the factorial of a given number @n
* @n: The number whose ! is to be got
* Return: returns an integer result of @n factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
