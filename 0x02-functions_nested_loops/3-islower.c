#include "main.h"

/**
 * _islower - function to check if a case is lower
 * @c: the character to check
 * Return: returns 1 if c is lower and 0 if otherwise
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
