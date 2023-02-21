#include "main.h"

/**
 * _abs - computes absolute valur of an integer
 * @x: an integer value
 * Return: return a value
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x == 0)
	{
		return (0);
	}
	else if (x < 0)
	{
		return (-x);
	}
	return (0);
}
