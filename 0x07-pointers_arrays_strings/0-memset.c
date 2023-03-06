#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: the constant byte
 * @n: an unsigned integer
 * Return: return the string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
