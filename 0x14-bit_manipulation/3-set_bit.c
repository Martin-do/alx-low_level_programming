#include "main.h"

/**
 * set_bit - gets the bit value at a specified index
 * @n: the number to be converted to binary
 * @index: the position at which to return the bit val
 * Return: returns 1 if successful and -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int inter;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	inter = 1;
	*n = *n | (inter << index);
	return (1);
}
