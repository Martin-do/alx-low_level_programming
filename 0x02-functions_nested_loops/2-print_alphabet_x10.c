#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times
 * Return: return void
 */
void print_alphabet_x10(void)
{
	int num = 0;

	for (; num <= 10; num++)
	{
		_putchar(print_alphabet);
	}
	_putchar('\n');
}
