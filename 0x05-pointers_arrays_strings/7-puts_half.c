#include "main.h"

/**
 * puts_half - prints half numbers
 * @str: charactes
 */
void puts_half(char *str)
{
	int num, count, half;

	num = 0;
	count = 0;
	for (; str[num] != '\0'; num++)
	{
		count++;
	}

	half = count / 2;

	if (half % 2 != 0)
	{
		for (; str[half] != '\0'; half++)
		{
			_putchar(str[half]);
		}
	}
	else
	{
		half = (count - 1) / 2;
		half += 1;
		for (; str[half] != '\0'; half++)
		{
			_putchar(str[half]);
		}
	}
	_putchar('\n');
}
