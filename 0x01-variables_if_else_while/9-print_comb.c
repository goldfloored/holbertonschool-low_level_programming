#include <stdio.h>
/**
*main - function
*Return: nothing
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
{
		if (i != '0')
{
			putchar(',');
			putchar(' ');
}
		putchar(i);
}

	putchar('\n');
	return (0);
}
