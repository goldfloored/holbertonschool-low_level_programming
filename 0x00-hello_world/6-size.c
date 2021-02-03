#include<stdio.h>
/**
* main - newhelp
* Description: noisnthtere
* Return: returfkfn
*/
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long long longlongType;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(doubleType));
	printf("Size of long long int: %zu bytes\n", sizeof(longlongType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	return (0);
}
