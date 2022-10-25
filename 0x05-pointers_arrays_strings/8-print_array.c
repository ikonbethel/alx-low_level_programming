#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n times the elements of an array
 * @a: the pointer to the elements
 * @n: no of times to print elements
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", a[x]);

		if (x < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
