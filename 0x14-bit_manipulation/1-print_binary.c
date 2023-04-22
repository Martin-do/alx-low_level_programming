#include "main.h"

/**
 * print_binary - converts a number to binary
 * @n: the number to be converted
 * Return: returns the binary form of the number
*/
void print_binary(unsigned long int n)
{
	int bool_0, i;
	unsigned long int container;

	bool_0 = 0;
	for (i = 63; i >= 0; i--)
	{
		container = (n >> i) & 1;
		if (container == 1)
			bool_0 = 1;
		if (bool_0 == 1)
			_putchar(((n >> i) & 1) + '0');
	}
	if (n == 0)
		_putchar('0');
}
