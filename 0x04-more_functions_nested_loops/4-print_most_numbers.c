#include "main.h"

/**
 * print_most_numbers - print mosts numbers
 */
void print_most_numbers(void)
{
	int num = 0;

	for (; num < 10; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar('0' + num);
		}
	}
	_putchar('\n');
}
