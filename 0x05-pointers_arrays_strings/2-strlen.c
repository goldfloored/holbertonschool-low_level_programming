#include "holberton.h"
/**
* _strlen - function length of string
* @s: pointer
* Return: length
*/
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
