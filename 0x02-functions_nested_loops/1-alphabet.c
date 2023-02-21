#include "main.h"

/**
 * print_alphabet - this prints out lowercase alphabets
 * Return: return void if no error
 */

void print_alphabet(void)
{
	int alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');
}
