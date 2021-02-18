#include "holberton.h"
/**
* print_rev - reverse string
* @s: pointer
* Return: nothing
*
*/
void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (*(s + i) != 0)
	{
		i = i + 1;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}

	putchar('\n');
}
