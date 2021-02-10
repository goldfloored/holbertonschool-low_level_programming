#include "holberton.h"
/**
 *_islower - is lower than
 *Return: 0
 **/
int _islower(int c)
{
	if ((96 < c) && (c < 123))
		return (1);
	else
		return (0);
}
