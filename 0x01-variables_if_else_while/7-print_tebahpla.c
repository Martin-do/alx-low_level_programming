#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function to print the alphabets backwards
 * Return: a return value of 0 if no error
 */
int main(void)
{
	int a = 'z';

	for (; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
