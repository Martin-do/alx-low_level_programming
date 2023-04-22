#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip number to another
 * @n: value of first number
 * @m: value of second number
 * Return: returns required number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum;
	unsigned long int bit_op;

	sum = 0;
	bit_op = n ^ m;
	while (bit_op)
	{
		sum += bit_op & 1;
		bit_op = bit_op >> 1;
	}
	return (sum);
}
