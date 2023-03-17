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
	ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);
	if ((ptr == NULL) || (new_size < old_size))
	{
		return (ptr);
		free(ptr);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
	free(ptr);


}

