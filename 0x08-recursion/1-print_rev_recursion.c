#include "holberton.h"
/**
*_print_rev_recursion - check
*@s:var
*Return: 0
*
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (s[0]);
	}
}
