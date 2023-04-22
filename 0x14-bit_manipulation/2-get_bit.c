#include "main.h"


/**
 * iterations - to return the length of the number after converting to binary
 * @n: the number to be converted to binary
 * Return: returns the length of the binary converted number
*/
unsigned int iterations(unsigned long int n)
{
	unsigned long int container = 1, iter = 0;

	while (container != 0)
	{
		container = n >> 1;
		iter++;
		n = container;
	}
	iter -= 1;
	return (iter);
}

/**
 * get_bit - gets the bit value at a specified index
 * @n: the number to be converted to binary
 * @index: the position at which to return the bit val
 * Return: returns the bit value at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int container = 1, count = 0;
	unsigned long int bin_comb = 0;
	unsigned int inter;

	inter = iterations(n);
	index = inter - index;
	while (container != 0)
	{
		container = n >> 1;
		if (container * 2 == n)
		{
			bin_comb = 0;
		}
		else
		{
			bin_comb = 1;
		}
		if (count == index)
			return (bin_comb);
		n = container;
		count++;
	}
	return (-1);
}
