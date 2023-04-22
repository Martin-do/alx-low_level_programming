#include "main.h"
/**
 * get_endianness - helps to get the endianness of a machine
 * Return: returns 1 if Little Endian or 0 if Big Endian
*/
int get_endianness(void)
{
	int x = 1;

	char *y = (char *)&x;

	return (*y);
}
