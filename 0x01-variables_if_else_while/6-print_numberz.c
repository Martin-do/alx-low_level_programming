#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - function to print 0-9 using putchar
 * Return: a return value of 0 if no error
 */
int main(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
