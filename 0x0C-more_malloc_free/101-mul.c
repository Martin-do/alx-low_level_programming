#include "main.h"

/**
 * is_num - checks if character is a digit
 * @num: charcater
 * Return: returns value
 */
int is_num(char *num)
{
	int len = 0;
	int i = 0;
	int count = 0;

	while (*(num + len) != '\0')
	{
		len++;
	}

	for (; i < len; i++)
	{
		if (num[i] > 47 && num[i] < 58)
		{
			count++;
		}
	}
	if (count == len)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	count = 0;
}

/**
 * main - multiplies two arguments together
 * @argc: argument counter
 * @argv: argument vector
 * Return: returns the product of the two arguments
 */
int main(int argc, char **argv)
{
	long prod;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit(98);
	}

	if ((is_num(argv[1]) == 0) && (is_num(argv[2]) == 0))
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%ld\n", prod);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
