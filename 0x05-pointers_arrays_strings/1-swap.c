#include "main.h"

/**
 * swap_int - function to swap integer
 * @a: first interger
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
