#include "variadic_functions.h"

/**
 * sum_them_all - sums up all the integers passed as
 * arguments to the function
 * @n: integer
 * Return: return sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
