#include <stdlib.h>
#include <string.h>
#include "holberton.h"
#include <stdio.h>
/**
* get_endianness - function that checks the endianness.
* Return: 0 or 1.
*/

int get_endianness(void)
{
	unsigned int x = 1;

	char *ch = (char *)&x;

	if (*ch)
		return (1);
	else
		return (0);
}
