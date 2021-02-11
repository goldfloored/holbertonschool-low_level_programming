#include <stdio.h>
/**
*main - prints the largest prime factor of the number 612852475143.
*description - good maths and logics
*Return: 0
*/
int main(void)
{
	long int n = 612852475143, d = 2, f;

	while (n != 0)
	{
		if (n % d != 0)
			d += 1;
		else
		{
			f = n;
			n /= d;
			if (n == 1)
			{
				printf("%ld\n", f);
				break;
			}
		}
	}
	return (0);
}
