#include "main.h"

/**
 * print_diagonal - prints diagonal
 */

void print_diagonal(int n)
{
	int num = 0;

	if (n != 0 && n > 0)
	{
		for (; num < n; num++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
