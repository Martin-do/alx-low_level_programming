#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: output string
 * @src: string to be copied
 * @n: and unsigned integer
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
