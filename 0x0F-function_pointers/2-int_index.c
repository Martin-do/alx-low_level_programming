#include "function_pointers.h"
/**
 * int_index - searches for a number and returns the index of the number
 * with respect to the cmp function
 * @array: the array to be searched
 * @size: the size of the array
 * @cmp: a funtion pointer to be used to compare values
 * Return: return index of the first elementfor which the cmp function
 * does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-);
}
