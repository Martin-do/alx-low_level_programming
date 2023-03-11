#include "main.h"

/**
 * main - returns name of program
 * @argc: argument count
 * @argv: argument vector
 * Return: return name of program
 */
int main(int argc, char **argv)
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
