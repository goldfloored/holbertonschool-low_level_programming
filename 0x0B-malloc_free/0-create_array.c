#include <stdlib.h>
#include "holberton.h"
/**
* create_array - main func creating initialised char
* @size: type unsigned int
* @c: char
* Return: it fails otherwhise return pointer
**/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;
	*(p + i) = '\0';

	return (p);
}
