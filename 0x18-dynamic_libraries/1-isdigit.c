#include "main.h"

/**
 * _isdigit - check for digit
 * @c: a digit
 * Return: return a value
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
