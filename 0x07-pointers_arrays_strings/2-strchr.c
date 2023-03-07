#include "main.h"

/**
 * _strchr - outputs a string from the first occurence of a character
 * @s: a pointer to a string
 * @c: character to be matched
 * Return: return a pointer to the modified string
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;

	for (; *(s + i) != c; i++)
	{
		j++;
	}
	for (i = 0; *(s + j) != '\0'; j++)
	{
		return (s + j);
	}
	return (s);
}
