#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int half = n / 2;
	int num, first, last;

	n -= 1;
	for (num = 0; num < half; num++)
	{
		first = a[n - num];
		last = a[num];
		a[num] = first;
		a[n - num] = last;
	}
}
