#include "holberton.h"
/**
*_isdigit - func
*description - everything
*Return: matters
*@c: argums
*/
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
