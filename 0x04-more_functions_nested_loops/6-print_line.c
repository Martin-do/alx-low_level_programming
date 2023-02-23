#include "main.h"

/**
 * print_line - print a straight line
 * @n: number of time
 */
void print_line(int n)
{
	int num = 0;

	if (n != 0 && n > 0)
	{
		for (; num < n; num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
