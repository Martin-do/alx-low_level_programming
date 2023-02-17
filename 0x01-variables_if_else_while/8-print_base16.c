#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is the main function
 * Return: a return value of 0 if no error
 */
int main(void)
{
	int a = 0;
	int b = 'a';

	for (; b <= 'f'; b++)
	{
		for (; a <= 9 ; a++)
		{
			putchar('0' + a);
		}
	putchar(b);
	}
	return (0);
}
