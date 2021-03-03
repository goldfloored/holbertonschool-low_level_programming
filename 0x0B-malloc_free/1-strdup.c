#include <stdlib.h>
#include "holberton.h"
/**
* _strdup - main func
* @str: pointer char
* Return: return pointer if success
**/

char *_strdup(char *str)
{
	unsigned int i = 0, b = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	p = malloc(i + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (b = 0; b < i; b++)
		p[b] = str[b];
	p[b + 1] = '\0';
	return (p);
}
