#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: an ascii character
 * Return: return a value
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
