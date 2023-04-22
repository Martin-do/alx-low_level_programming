#include "main.h"

/**
 * print_binary - converts a number to binary
 * @n: the number to be converted
 * Return: returns the binary form of the number
*/
void print_binary(unsigned long int n)
{
	unsigned long int container = 1, i = 1;
	unsigned long int bin_comb = 0;

	while (container != 0)
	{
		container = n >> 1;
		if (container * 2 == n)
		{
			bin_comb += 0;
		}
		else
			bin_comb += i;
		n = container;
		i *= 10;
	}
	printf("%ld", bin_comb);
}
