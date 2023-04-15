#include "main.h"
#include <stdarg.h>

/**
 * file_check_a - checks the conditions for file to be copied from
 * @a: file to be copied from
 * Return: returns a file descriptor
*/
int file_check_a(char *a)
{
	int file_a;

	file_a = open(a, O_RDONLY);
	if (file_a == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
	}
	return (file_a);
}

/**
 * file_check_b - checks the conditions for file that is being copied to
 * @b: file to be copied to
 * Return: returns a file descriptor
*/
int file_check_b(char *b)
{
	int file_b;

	file_b = open(b, O_CREAT | O_WRONLY | O_TRUNC, 664);
	if (file_b == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", b);
	}
	return (file_b);
}

/**
 * main - copies text from one file to another
 * @argc: argument counter
 * @argv: argument vector
 * Return: returns a value
*/
int main(int argc, char **argv)
{
	int file_frm, file_to;
	char buffer[1024];
	ssize_t file_cp, content;

	if (argc - 1 != 2)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}
	file_frm = file_check_a(argv[1]);
	file_to = file_check_b(argv[2]);
	while ((content = read(file_frm, buffer, 1024)) > 0)
	{
		file_cp = write(file_to, buffer, content);
		if (file_cp == -1)
		{
			exit(99);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (content == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(file_frm) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_frm);
	}
	if (close(file_to) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	}
	return (0);
}
