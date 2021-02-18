#include "holberton.h"
/**
 *puts2 - prints every char
 *@str: array strings
 *Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;

	for (; *(str + i); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
