#include "main.h"

/**
 * same_len_cmp - compares string of same length
 * @a: first string
 * @b: secod string
 * @cnt: length of string
 * Return: return value
 */

int same_len_cmp(char *a, char *b, int cnt)
{
	int cmp1, cmp2, cmp3, num;

	cmp1 = 0;
	cmp2 = 0;
	cmp3 = 0;
	for (num = 0; num < cnt; num++)
	{
		if (a[num] < b[num])
		{
			cmp1++;
		}
		else if (a[num] > b[num])
		{
			cmp2++;
		}
		else
		{
			cmp3++;
		}
	}
	if (cmp1 > cmp2)
	{
		return (-15);
	}
	else if (cmp2 > cmp1)
	{
		return (15);
	}
	else if (cmp3 == cmp1 & cmp3 == cmp2)
	{
		return (0);
	}
	else
	{
		return (0);
	}
}

/**
 * _strcmp - compare string
 * @s1: first string
 * @s2: secon d string
 * Return: return value
 */

int _strcmp(char *s1, char *s2)
{
	int s1_count = 0;
	int s2_count = 0;
	int num = 0;
	int cmp1 = 0;
	int cmp2 = 0;
	int cmp3 = 0;

	for (; s1[num] != '\0'; num++)
	{
		s1_count++;
	}
	num = 0;
	for (; s2[num] != '\0'; num++)
	{
		s2_count++;
	}
	num = 0;
	if (s1_count == s2_count)
	{
		same_len_cmp(s1, s2, s1_count);
	}
	else if (s1_count < s2_count)
	{
		return (-15);
	}
	else if (s1_count > s2_count)
	{
		return (15);
	}
	return (0);
}
