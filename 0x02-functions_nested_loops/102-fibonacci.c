#include <stdlib.h>

/**
 * main - fibonacci sequence
 * Return: returns a value
 */
int main(void)
{
	int n, seq, n_seq, i;

	n = 0;
	seq = 1;
	i = 0;
	while (i <= 50)
	{
		n_seq = seq + n;
		printf("%d", n);
		n = seq;
		seq = n_seq;
		i++;
		if (i <= 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
