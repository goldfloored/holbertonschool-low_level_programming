#include "holberton.h"
/**
* _strcat - two strings
* @dest: destination string
* @src: source string
* Return: *src char
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (j = 0; *(src + j); j++)
	{
		*(dest + i + j) = *(src + j);
	}
	*(dest + i + j + 1) = '\0';

	return (dest);
}
