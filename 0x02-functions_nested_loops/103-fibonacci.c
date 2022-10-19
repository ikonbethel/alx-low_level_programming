#include <stdio.h>
/**
  * main - sum even fibonacci numbers under 4 million.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, x, y, z, sums;

	x = sums = 0;
	y = 1;
	for (count = 0; count < 50; count++)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0 && z < 4000000)
		{
			sums += z;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
