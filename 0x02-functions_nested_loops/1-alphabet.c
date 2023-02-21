#include "main.h"

/**
 * main - this prints out lowercase alphabets
 * Return: return 0 if no error
 */

int main(void)
{
	int alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
