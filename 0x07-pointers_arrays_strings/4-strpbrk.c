#include "main.h"

/**
 * _strpbrk - a function
 * @s: string to be scanned
 * @accept: string to match
 * Return: returns first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (; *(s + i) != '\0'; i++)
	{
		for (; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}

	return (NULL);


}
