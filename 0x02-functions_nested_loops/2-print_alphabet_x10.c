#include "holberton.h"
/**
 * print_alphabet_x10 - function
 * description: print 10 times
 * Return: zero
 **/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
void print_alphabet_x10(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		print_alphabet();
	}
}
