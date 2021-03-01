#include <stdio.h>
/**
 * main - function name
 * @argc: number of arguments
 * @argv: the argument's value
 * Return: zero
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
