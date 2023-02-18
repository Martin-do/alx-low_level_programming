#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print two digit two combination
 * Return: return value of 0 if no error
 */
int main(void)
{
	int a, b, c, d, num, sum;

	sum = a + b + c + d;
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			num = b + 1;
			for (c = a; c <= 9; c++)
			{
				for (d = num; d <= 9; d++)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					if (((a != 9) & (sum < 36)) || (a == 9) & (sum < 35))
					{
						putchar(',');
						putchar(' ');
					}
				}
				num = 0;
			}
		}
	}
	return (0);
}

