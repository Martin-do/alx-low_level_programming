#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: ans ascii character
 * Return: return 1 if lowercase or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		if ((c >= 97) & (c <= 122))
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
