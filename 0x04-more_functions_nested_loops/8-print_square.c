#include "holberton.h"

/**
* print_square - skuare
* @size: parameter dimensions of the square
* Return: Void
**/

void print_square(int size)
{
	int y;

	int x;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
