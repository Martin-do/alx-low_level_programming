#include "main.h"

/**
 * _puts - function to print out a string
 * @str: string of characters
 */
void _puts(char *str)
{
	int num;

	num = 0;
	for (; str[num] != str[-1]; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
