#include <stdio.h>
/**
 *main - main func
 *@argc: number of arguments
 *@argv: the argument's value
 *Return: int
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
