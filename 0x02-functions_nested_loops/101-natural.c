#include <stdlib.h>
#include <stdio.h>

/**
 * main - sum of multiples
 * Return: return a value
 */
int main(void)
{
	int n, mod3, mod5, sum;

	n = 0;
	sum = 0;
	for (; n < 1024; n++)
	{
		mod3 = n % 3;
		mod5 = n % 5;
		if ((mod3 == 0) || (mod5 == 0))
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
