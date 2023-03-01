#include "main.h"

/**
 * _strcat - concatenates strings together
 * @dest: output string
 * @src: input string
 * Return: returns the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int num, count;

	for (num = 0; dest[num] != '\0'; num++)
	{
		count++;
	}

	num = 0;

	for (; src[num] != '\0'; num++)
	{
		dest[count + num] = src[num];
	}
	dest[count + num] = '\0';

	return (dest);
}
