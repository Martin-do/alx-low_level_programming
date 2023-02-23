#include "main.h"

/**
 * more_numbers - prints out more numbers
 */
void more_numbers(void)
{
	int mul = 0;
	int num = 0;

	for (; mul < 11; mul++)
	{
		for (; num < 15; num++)
		{
			_putchar('0' + num);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
