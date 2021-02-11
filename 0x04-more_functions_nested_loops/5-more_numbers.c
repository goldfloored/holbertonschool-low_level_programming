#include "holberton.h"
void print_numbers(void)
{
	int n;

	for(n = 0; n <= 13; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
void more_numbers(void)
{
	int x;

	for(x = 0; x <= 9; x++)
	{
		print_numbers();
	}
}
