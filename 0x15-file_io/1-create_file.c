#include "main.h"

/**
 * _strlen - counts the length of a string
 * @string: string to nbe counted
 * Return: returns the length of the string
*/
int _strlen(const char *string)
{
	int length;

	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * create_file - creates a new file with rw permissions
 * @filename: name of the file to be created
 * @text_content: the contents to write to the file
 * Return: returns a value
*/
int create_file(const char *filename, char *text_content)
{
	int new_file, file_w;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (new_file == -1)
		return (-1);
	if (text_content != NULL)
	{
		file_w = write(new_file, text_content, _strlen(text_content));
		if (file_w == -1)
			return (-1);
	}
	text_content = "";
	file_w = write(new_file, text_content, _strlen(text_content));
	if (file_w == -1)
		return (-1);
	close(new_file);

	return (1);
}
