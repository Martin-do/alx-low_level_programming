#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 */
void print_numbers(void)
{
	int num = 0;

	for (; num < 10; num++)
	{
		_putchar(num + 48);
	}
	_putchar('\n');
}
