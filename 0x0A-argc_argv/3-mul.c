#include "main.h"

/**
 * main - multiplies two integers from argument
 * @argc: argument count
 * @argv: argument vector
 * Return: return value
 */
int main(int argc, char **argv)
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
