#include "main.h"

/**
 * print_rev - prints string in revers
 * @s: a string
 */
void print_rev(char *s)
{
	int num, count;

	num = 0;
	count = 0;
	for (; s[num] != s[-1]; num++)
	{
		count++;
	}
	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
