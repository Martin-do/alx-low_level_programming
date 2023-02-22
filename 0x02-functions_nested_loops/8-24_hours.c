#include "main.h"

/**
 * jack_bauer - every minute of the day
 * Return: return a value
 */
void jack_bauer(void)
{
	int a, b, c, d, num;

	for (a = 0; a <= 2; a++)
	{
		if (a != 2)
		{
		num = 9;
		}
		else
		{
		num = 3;
		}
		for (b = 0; b <= num; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
				}
				d = 0;
			}
			c = 0;
		}
		b = 0;
	}
}
