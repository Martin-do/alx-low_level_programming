#include "main.h"

/**
 * _strncat - concatenates strig with size consideration
 * @dest: output
 * @src: input string
 * @n: size in byte
 * Return: returns the output as a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
