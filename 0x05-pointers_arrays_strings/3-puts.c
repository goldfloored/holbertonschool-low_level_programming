#include "holberton.h"
/**
 *_puts - prints the content of the string
 *@str: pointer to a string
 * Return : void
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
		_putchar (str[i]);
}
	_putchar ('\n');
}
