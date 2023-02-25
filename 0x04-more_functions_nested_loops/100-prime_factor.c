#include "main.h"

/**
 * largest_prime_num - prints out the largest prime num
 * Return: retyrns a value
 */
int largest_prime_num(void)
{
	long int prime = 612852475143;
	long int quotient = prime;
	long int divisor = 2;

	while (quotient != divisor)
	{
		if (quotient % divisor == 0)
		{
			quotient = quotient / divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%li\n", quotient);
	return (0);
}
