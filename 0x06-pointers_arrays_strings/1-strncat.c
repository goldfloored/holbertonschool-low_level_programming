#include "holberton.h"
/**
* _strncat - concatinates n bytes two strings
* @dest: The destination string
* @src: source string.
* @n: the num of char to concat.
* Return: dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	j = 0;
	while ((j < n) && (*(src + j) != '\0'))
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j + 1) = '\0';

	return (dest);
}
