#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a string
 */
void rev_string(char *s)
{
	int num, count, a, b;

	num = 0;
	count = 0;

	for (; s[num] != s[-1]; num++)
	{
		if (s[num] > 0)
		{
			count++;
		}
	}
	count -= 1;
	half = count / 2;
	for (; count >= 0; count--)
	{
		a = s[count - half];
		b = s[half];
		s[half] = a;
		s[count - half] = b;
		half--;
	}
}
