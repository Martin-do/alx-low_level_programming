#include "main.h"

/**
 * leet - encoder
 * @a: string to be encoded
 * Return: return encoded string
 */
char *leet(char *a)
{
	int num = 0;

	for (; a[num] != '\0'; num++)
	{
		if ((a[num] == 'a') || (a[num] == 'A'))
		{
			a[num] = '4';
		}
		if ((a[num] == 'e') || (a[num] == 'E'))
		{
			a[num] = '3';
		}
		if ((a[num] == 'o') || (a[num] == 'O'))
		{
			a[num] = '0';
		}
		if ((a[num] == 't') || (a[num] == 'T'))
		{
			a[num] = '7';
		}
		if ((a[num] == 'l') || (a[num] == 'L'))
		{
			a[num] = '1';
		}
	}
	return (a);
}
