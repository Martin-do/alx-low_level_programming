#include "main.h"

/**
 * _strlen_recursion - counts and outputs the number of characters of a string
 * @s: string
 * Return: returns a value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion((s + 1)));
	}
}
