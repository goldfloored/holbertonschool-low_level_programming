#include "holberton.h"
/**
 *puts2 - prints every
 *@str: array
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
		_putchar(*str);
		}
	str++;
	i++;
	}
_putchar('\n');
}
