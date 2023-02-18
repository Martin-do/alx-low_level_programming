#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print two digit two combination
 * Return: return value of 0 if no error
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 1; d <= 9; d++)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					if (c + d < 18)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			if (a + b < 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}

