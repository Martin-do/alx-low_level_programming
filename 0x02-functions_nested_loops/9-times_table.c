#include "main.h"

/**
 * times_table - the 9 times table
 * Return: return a value 0
 */
void times_table(void)
{
	int a, b, mul;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mul = a * b;
			_putchar('0' + mul);
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		b = 0;
	}
}
