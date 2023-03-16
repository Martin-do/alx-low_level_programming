#include "main.h"

/**
 * _calloc - allocates memory and initializes with 0
 * @nmemb: array of elements
 * @size: size of memory to allocate
 * Return: returns pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *a;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (; i < nmemb; i++)
	{
		a[i] = 0;
	}
	return (a);
}
