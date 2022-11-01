#include "main.h"
#include <stdio.h>

/**
* set_string -Entry point- sets the value of a pointer to a char
* @s: Double pointer
* @to: Pointer
* Return: This returns void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
