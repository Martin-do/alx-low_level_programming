#include "main.h"

/**
 * main - multiplies two integers from argument
 * @argc: argument count
 * @argv: argument vector
 * Return: return value
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(rgv[1]) * atoi(argv[2]));
		return (0);
	}
}
