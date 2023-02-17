#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - this is the main function
 * Return: a return value of 0 if no error
 */
int main(void)
{
	char alphaL = 'a';
	char alphaU = 'A';

	for (; alphaU <= 'Z'; alphaU++)
	{
		for (; alphaL <= 'z'; alphaL++)
		{
			putchar(alphaL);
		}
		putchar(alphaU);
	}
	putchar('\n');
	return (0);
}
