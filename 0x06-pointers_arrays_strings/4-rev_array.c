#include "main.h"

/**
 * reverse_array - Entry point- reverses the contents of an array
 * @a: integer array to be reversed
 * @n: length of array, a
 *
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
	int x = 0, y;

	n = n - 1;
	while (x < n)
	{
		y = *(a + x);
		*(a + x) = *(a + n);
		*(a + n) = y;
		x++;
		n--;
	}
}
