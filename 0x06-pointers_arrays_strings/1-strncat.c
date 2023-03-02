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
	int num = 0;
	int count = 0;
	int size = 0;

	for (; dest[num] != '\0'; num++)
	{
		count++;
	}
	num = 0;
	for (; size <= n && src[num] != '\0'; num++)
	{
		dest[count + num] = src[num];
		size += sizeof(src + num);
	}
	dest[count + num] = '\0';
	return (dest);
}
