#include "main.h"

/**
 * times_table - the 9 times table
 * Return: return a value 0
 */
void times_table(void)
{
	int a, b, c, d, mul;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mul = a * b;
			if (mul < 10)
			{
				_putchar('0' + mul);
			}
			else
			{
				c = mul / 10;
				d = mul % 10;
				_putchar('0' + c);
				_putchar('0' + d);
			}
			if (b < 9)
			{
				if (mul < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
		b = 0;
	}
}
