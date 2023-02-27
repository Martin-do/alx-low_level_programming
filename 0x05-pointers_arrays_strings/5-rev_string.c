#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a string
 */
void rev_string(char *s)
{
	int num, count, half;
	char a, b;

	num = 0;
	count = 0;

	for (; s[num] != '\0'; num++)
	{
		if (s[num] > 0)
		{
			count++;
		}
	}
	count -= 1;
	half = count / 2;
	for (; half >= 0; half--)
	{
		a = s[count - half];
		b = s[half];
		s[half] = a;
		s[count - half] = b;
	}
}
