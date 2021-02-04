#include <stdio.h>
/**
*main -function
*Return: always 0
*/
int main(void)
{
	int x, e, z;

	for (x = '0'; x <= '9'; ++x)
{
		for (e = x; e <=  '9'; ++e)
{
			for (z = e; z <=  '9'; ++z)
{
				if (x != e && x != z && e != z)
{
					if (x != '0' || e != '1' || z != '2')
{
						putchar(',');
						putchar(' ');
}
					putchar(x);
					putchar(e);
					putchar(z);
}
}
}
}

	putchar('\n');
	return (0);
}
