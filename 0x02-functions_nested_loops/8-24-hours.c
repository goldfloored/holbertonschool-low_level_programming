#include "holberton.c"
void jack_bauer(void)
{
	int h;

	int m;

	for (h = "00"; h <= "24"; h++)
	{
		_putchar(h);
		_putchar(":");
		for (m = "00"; m <= "59"; m++)
		{
			_putchar(h);
			_putchar('\n');
			if (m > 59)
			{
				
			}
		}
	}

}
