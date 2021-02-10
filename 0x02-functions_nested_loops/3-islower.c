#include "holberton.h"
/**
 *_islower - is lower than
 * int c - is an ordinary
 *Return: 0
 **/
int _islower(int c)
{
	if (96 < c && c < 123)
		return (1);
	else
		return (0);
}
