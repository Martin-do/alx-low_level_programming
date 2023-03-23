#include "3-calc.h"


/**
 * main - main function that performs operation
 * @argc: argument counter
 * @argv: argument vector
 * Return: returns result of operation
*/
int main(int argc, char **argv)
{
	int num1, num2;

	char *modulus = "%";
	char *division = "/";
	char *zero = "0";

	if (argc - 1 != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (((argv[2] == division) || (argv[2] == modulus)) && (argv[3] == zero))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	return (get_op_func(argv[2])(num1, num2));
}
