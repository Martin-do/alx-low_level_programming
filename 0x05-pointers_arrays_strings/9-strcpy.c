#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: return destination
 */
char *_strcpy(*dest, *src)
{
	int num = 0;

	for (; *(src + num) != '\0'; num++)
	{
		dest[num] = *(src + num);
	}
	dest[num] = '\0';
	return (dest);
}
