#include "main.h"

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to previously allocated memory
 * @old_size: size of previous memory
 * @new_size: size of memory to be reallocated
 * Return: return pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *a, *rep;
	unsigned int i = 0;

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	if ((ptr == NULL) || (new_size < old_size))
	{
		return (a);
		free(ptr);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	rep = ptr;
	while (i < old_size)
	{
		a[i] = rep[i];
		i++;
	}
	return (a);
	free(ptr);


}

