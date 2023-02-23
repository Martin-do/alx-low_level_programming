#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: number of times
 */

void print_diagonal(int n)
{
	int num = 0;

	if (n != 0 && n > 0)
	{
		for (; num < n; num++)
		{
			if (num == n - 1)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
