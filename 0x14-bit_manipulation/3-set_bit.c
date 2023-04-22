#include "main.h"

/**
 * get_bit - gets the bit value at a specified index
 * @n: the number to be converted to binary
 * @index: the position at which to return the bit val
 * Return: returns the bit value at the index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int inter;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	else
	{
		mask = 1;
		*n = *n | (mask << index);
	}
	return (0);
}
