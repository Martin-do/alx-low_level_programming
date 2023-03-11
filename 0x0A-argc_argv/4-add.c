#include "main.h"

/**
 * main - adds numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: return value
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int count = 0;

	if ((argc - 1 == 1) || (atoi(argv[count]) < 48) || (atoi(argv[count]) > 57))
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		while (count != argc)
		{
			sum += atoi(argv[count]);
			count++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
