#include "holberton.h"
/**
*_isupper - sees if its upper
*description - counts
*Return: 1 or 0
*@c: parameter
*/
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
