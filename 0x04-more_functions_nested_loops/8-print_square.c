#include "main.h"

/**
 * print_square - prints square but with # character
 * @size: size of character
 */
void print_square(int size)
{
	int num = 0;
	int hash = 0;

	if (size != 0 && size > 0)
	{
		for (; num < size; num++)
		{
			for (; hash < size; hash++)
			{
				_putchar('#');
			}
			hash = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
