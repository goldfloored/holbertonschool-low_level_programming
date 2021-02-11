#include "holberton.h"
/**
*print_line - print lines according to int n
*@n: function parameter
*Return: Void
*/
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n ; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
		}
	else
	{
		_putchar('\n');
	}
}
