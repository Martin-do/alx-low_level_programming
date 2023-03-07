#include "main.h"

/**
 * _strspn - counts number of occurence in first part of a string
 * @s: string to be scanned
 * @accept: characters or string to be counted
 * Return: returns the count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int count = 0;

	for (; *(accept + i) != '\0'; i++)
	{
		for (; *(s + j) != ' '; j++)
		{
			if (*(accept + i) == *(s + j))
			{
				count++;
			}
		}
		j = 0;
	}
	return (count);
}
