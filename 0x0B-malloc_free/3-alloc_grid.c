#include "main.h"

/**
 * alloc_grid - allocates memory for grid
 * @width: width of grid
 * @height: height of grid
 * Return: return something
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	a = malloc(height * sizeof(int));

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		/*
		 * if (a[i] == NULL)
		 * {
		 * while (i >= 0)
		 * {
		 * free(a[i]);
		 * i--;
		 * }
		 * free(a);
		 * return (NULL);
		 * }
		 */
	}
	return (a);
}
