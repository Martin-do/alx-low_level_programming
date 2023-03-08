#include "main.h"

/**
 * factorial - outputs the factorial of a number
 * @n: an integer
 * Return: returns a value
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
