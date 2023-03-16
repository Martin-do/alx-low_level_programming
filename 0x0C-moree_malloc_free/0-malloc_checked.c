#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of bytes to be allocated
 * Return: return pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(b));
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
