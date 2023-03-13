#include "main.h"

/**
 * create_array - creates an array of char and initialize
 * @size: size of character
 * @c: char array
 * Return: return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	a = malloc(size * sizeof(char));
	if ((size == 0) || (a == NULL))
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			*(a + i) = c;
			i++;
		}
		return (a);
	}
}
