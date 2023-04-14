#include "main.h"

/**
 * read_textfile - reads a text file and prints output
 * @filename: the name of the file you want to read
 * @letters: the size of bytes you want to read
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_o;
	char *letter_size;
	ssize_t file_read, output;

	if (filename == NULL)
		return (0);

	file_o = open(filename, O_RDONLY);
	if (file_o == -1)
		return (0);

	letter_size = malloc(sizeof(char) * letters + 1);
	if (letter_size == NULL)
		return (0);

	file_read = read(file_o, letter_size, letters);
	if (file_read == -1)
		return (0);
	etter_size[letters + 1] = '\0';
	close(file_o);

	output = write(STDOUT_FILENO, letter_size, file_read);
	if (output == -1)
		return (0);

	return (file_read);
}
