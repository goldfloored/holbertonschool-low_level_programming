#include "holberton.h"
void print_numbers(void)
{
	int n;

	for(n = 0; n <= 14; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
void more_numbers(void)
{
	int x;

	for(x = 0; x <= 10; x++)
		print_numbers();
}
