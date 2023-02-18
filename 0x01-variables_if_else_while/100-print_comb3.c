#include <stdlib.h>
#include <stdio.h>
/**
 * main - function to print all possible combo of 2 digits
 * Return: a return value of 0 if no error
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int count = 9;
	int loop = 0;
	int comma = 1;

	for (loop; loop <= 9; loop++)
	{
		for (count; count != 0; count--)
		{
		if (b <= 9)
		{
			putchar('0' + a);
			putchar('0' + b);
			b++;
			if (comma <= 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	comma++;
	b = loop + 1;
	count = 9;
	a++;
	b++;
	}
	return (0);
}
