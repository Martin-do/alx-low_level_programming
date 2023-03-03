#include "main.h"

/**
 * cap_string - capitalize string
 * @a: string
 * Return: return capitalized string
 */

char *cap_string(char *a)
{
	int num = 0;

	for (; a[num] != '\0'; num++)
	{
		if ((a[num] > 96) & (a[num] < 123))
		{
			if ((a[num-1] >= 0 ) & (a[num-1] < 35))
			{
				a[num] -= 32;
			}
			if ((a[num-1] >= 40) & (a[num-1] <=41))
			{
				a[num] -= 32;
			}
			if ((a[num-1] >= 44) & (a[num-1] <=46))
			{
				a[num] -= 32;
			}
			if ((a[num-1] == 58) || (a[num-1] ==59))
			{
				a[num] -= 32;
			}
			if ((a[num-1] >= 123) & (a[num-1] <=125))
			{
				a[num] -= 32;
			}
		}
	}
	return (a);
}
