#include "holberton.h"

int print_last_digit(int x)
{
	n = n % 10;

	if (n < 0)
	{
		n = (n % 10) * (-1);

		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = n % 10;

		_putchar(n + '0');
		return (n);
	}
}
