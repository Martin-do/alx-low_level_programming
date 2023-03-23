#include <stdio.h>

/**
 * print_name - function pointer that prints name
 * @name: name to be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
