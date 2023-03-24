#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: a separator for each string
 * @n: the number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *s;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, const char*);

		if (s == NULL)
			s = "(nil)";
		if (separator == NULL)
			separator = "";
		if (i != n - 1)
			printf("%s%s", s, separator);
		else
			printf("%s", s);
	}
	va_end(ap);
	printf("\n");
}
