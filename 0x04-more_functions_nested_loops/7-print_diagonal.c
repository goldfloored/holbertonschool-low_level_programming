#include "holberton.h"

/**
*print_diagonal - prints coloured line
*@n: length of a line
*Return: Void
**/

void print_diagonal(int n)
{
	int y;

	int x;

	for (y = 1; y <= n; y++)
	{
		for (x = 1; x < y; x++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
