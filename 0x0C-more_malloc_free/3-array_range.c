#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimun integer
 * @max: maximum integer
 * Return: returns pointers to the newly created array
 */

int *array_range(int min, int max)
{
	int *a, i;
	int range = (max - min) + 1;

	if (min > max)
		return (NULL);

	a = malloc(range * sizeof(int));

	if (a == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
	{
		if (min <= max)
		{
			a[i] = min;
			min++;
		}
	}
	return (a);
}

