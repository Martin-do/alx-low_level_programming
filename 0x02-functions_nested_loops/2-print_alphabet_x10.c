#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times
 * Return: return void
 */
void print_alphabet_x10(void)
{
	int alpha = 'a';

	for (int num = 0; num <= 10; num++)
	{
		for (; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}
	_putchar('\n');
}
