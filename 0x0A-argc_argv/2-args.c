#include "main.h"

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: return vale
 */

int main(int argc, char **argv)
{
	int count = 0;

	while (count != argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}

	return (0);
}
