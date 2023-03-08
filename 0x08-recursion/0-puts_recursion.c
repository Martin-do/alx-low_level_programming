#include "main.h"

/**
 * _puts_recursion - works like the puts fucntion, prints outs string
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
		putchar(*(s + i));
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
