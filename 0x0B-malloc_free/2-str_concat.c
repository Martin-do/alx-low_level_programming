#include  "main.h"

/**
 * str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 * Return: returns concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int len_sum, i;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + len1) != '\0')
	{
		len1++;
	}
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}
	len_sum = len1 + len2;
	a = malloc((len_sum * sizeof(char)) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		a[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		a[len1 + i] = s2[i];
	}

	return (a);

}

