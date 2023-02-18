#include <stdlib.h>
#include <stdio.h>
/**
 * main - function to print all possible combo of 2 digits
 * Return: a return value of 0 if no error
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			if (a != b)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (a + b < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
