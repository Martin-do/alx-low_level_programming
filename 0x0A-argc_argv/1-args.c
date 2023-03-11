#include "main.h"
/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: return value
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	int args = argc - 1;

	printf("%d\n", args);
	return (0);
}
