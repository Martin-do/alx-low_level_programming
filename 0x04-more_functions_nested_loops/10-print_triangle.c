#include "main.h"

/**
 * print_triangle - to print a triangle
 * @size: the aize of the triangle
 */
void print_triangle(int size)
{
	int num, hash, times;

	if (size != 0 && size > 0)
	{
		for (num = 0; num < size; num++)
		{
			for (hash = 0; hash + 1 < size - num; hash++)
			{
				_putchar(' ');
			}
			for (times = 0; times <= num; times++)
			{
				_putchar('#');
			}
			hash = 0;
			times = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
