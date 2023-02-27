#include "main.h"

/**
 * puts2 - prints string
 * @str: a string
 */
void puts2(char *str)
{
	int num = 0;

	for (; str[num] != '\0'; num++)
	{
		if (num % 2 == 0)
		{
			_putchar(str[num]);
		}
	}
	_putchar('\n');
}
