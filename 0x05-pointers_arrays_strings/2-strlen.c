#include "main.h"

/**
 * _strlen - function to return length of a string
 * @s: a string
 * Return: returns a value
 */
int _strlen(char *s)
{
	int num, count;

	for (num = 0; s[num] != s[-1]; num++)
	{
		count++;
	}

	return (count);
}
