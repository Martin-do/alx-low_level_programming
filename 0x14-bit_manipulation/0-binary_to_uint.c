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
 * _pow - calculates the power of a value
 * @x: the base value
 * @y: the power
 * Return: returns the value
 */
int _pow(int x, int y)
{
	int i = 0, j = 1;

	for (; i < y; i++)
		j *= x;
	return (j);
}

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: the binary number to be converted
 * Return: returns the converted unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, exp, num;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	exp = _strlen(b);
	for (; b[i] != '\0'; i++)
	{
		if ((b[i] == '0') || (b[i] == '1'))
		{
			num = b[i] - '0';
			sum += num * _pow(2, exp - 1);
			exp = exp - 1;
		}
		else
			return (0);
	}
	return (sum);
}
