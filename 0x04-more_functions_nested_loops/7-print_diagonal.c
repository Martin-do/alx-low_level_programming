#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: number of times
 */

void print_diagonal(int n)
{
	int num = 0;
	int space = 0;

	if (n != 0 && n > 0)
	{
		for (; num < n; num++)
		{
			for (; space < num; space++)
			{
				_putchar(' ');
			}
			space = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
