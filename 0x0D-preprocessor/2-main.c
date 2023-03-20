#include <stdio.h>

/**
 * main - prints out the name of the file
 * that it was compiled from
 * Return: return 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
