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
			if (!((a[num - 1] > 64) & (a[num - 1] < 123)))
			{
				if (!((a[num - 1] > 47) & (a[num - 1] < 58)))
				{
					a[num] -= 32;
				}
			}
		}
	}
	return (a);
}
