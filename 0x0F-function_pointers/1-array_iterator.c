#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: an array
 * @size: size of the array
 * @action: a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if ((array == NULL) || (action == NULL))
		return;

	for (; i < size; i++)
		action(array[i]);
}
