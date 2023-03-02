#include "main.h"

/**
 * _strncpy - copy strings with size consideration
 * @dest: output
 * @src: input string
 * @n: the size
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int num = 0;

	for (; num < n && src[num] != '\0'; num++)
	{
		dest[num] = src[num];
	}
	for (; num < n; num++)
	{
		dest[num] = '\0';
	}

	return (dest);
}
