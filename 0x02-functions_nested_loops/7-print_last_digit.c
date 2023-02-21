#include "main.h"

/**
 * print_last_digit - to print last digit of a number
 * @x: a number
 * Return: a return value
 */
int print_last_digit(int x)
{
	x = x % 10;
	_putchar('0' + x);
	return (x);
}

