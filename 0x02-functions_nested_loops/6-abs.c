#include "main.h"

/**
 * _abs - Code entry point.
 *
 * @num is a positive or negative integer
 *
 * This fuction that computes the absolute value of an integer.
 *
 * Return: int
 */
int _abs(int num)
{
	int result;

	if (num < 0)
	{
		result = num * -1;
		return (result);
	}
	else
	{
		result = num;
		return (result);
	}
}
