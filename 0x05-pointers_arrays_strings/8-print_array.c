#include "main.h"

/**
 * print_array - prints arra
 * @a: array variable name
 * @n: length of the array
 */
void print_array(int *a, int n)
{
	int num = 0;

	for (; num < n; num++)
	{
		if (num < n - 1)
		{
			printf("%d, ", a[num]);
		}
		else
		{
			printf("%d\n", a[num]);
		}
	}
}
