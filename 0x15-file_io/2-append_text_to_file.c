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
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file to append text to
 * @text_content: the content to append to the file
 * Return: returns a value
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int new_file, file_w;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_WRONLY | O_APPEND);
	if (new_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	file_w = write(new_file, text_content, _strlen(text_content));
	if (file_w == -1)
		return (-1);
	close(new_file);

	return (1);
}
