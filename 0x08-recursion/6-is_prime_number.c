#include "main.h"

/**
* prime_check -Entry point- Checks if number is prime
* @x: input factor
* @y: Possible prime number
* Return: returns 1 if prime, else returns 0
*/

int prime_check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (prime_check(x + 1, y));
}

/**
* is_prime_number -Main Entry point- states status of number as prime
* @n: integer input to be checked
* Return: returns 1 if int is prime, or else, 0
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
