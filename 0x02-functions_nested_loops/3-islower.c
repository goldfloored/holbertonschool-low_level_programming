#include "holberton.h"
/**
 *_islower - is lower than
 *@c - is an ordinary
 *Return: 0
 **/
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
