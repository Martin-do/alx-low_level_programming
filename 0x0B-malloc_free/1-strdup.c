#include "main.h"

/**
 * _strdup - creates copy of a string on new memory
 * @str: string to be copied
 * Return: returns a pointer to newly allocated space
 * of the copied string
 */

char *_strdup(char *str)
{
	int i = 0;
	char *str_c;

	str_c = malloc(sizeof(str));

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*(str + i) != '\0')
		{
			*(str_c + i) = *(str + i);
			i++;
		}
		return (str_c);
	}
}
