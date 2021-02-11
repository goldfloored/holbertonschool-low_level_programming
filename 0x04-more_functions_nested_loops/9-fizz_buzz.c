#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*main - main func
*description - fizzbuzz me
*Return: returns true
*/
int main(void)
{
	int x;

	for (x = 1; x < 99; x++)
	{
		if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else if (x % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", x);
		printf(" ");

	}
	return (1);
}
