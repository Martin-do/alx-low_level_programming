#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @a: the string to be changed
 * Return: returns the string
 */
char *string_toupper(char *a)
{
	int num = 0;

	for (; a[num] != '\0'; num++)
	{
		if ((a[num] > 95) & (a[num] < 123))
		{
			a[num] -= 32;
		}
	}
	return (a);
}
