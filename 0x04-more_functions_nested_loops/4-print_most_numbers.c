#include "holberton.h"
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if(n == '2' || n == '4')
			continue;
		else
			_putchar(n);
	}
	_putchar('\n');
}
