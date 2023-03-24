#include "variadic_functions.h"


/**
 * print_numbers - prints out the numbers passed as
 * arguments separated by a specified separator
 * @separator: a specified character to separate the numbers
 * @n: number of integer arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *s;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(
		if ((separator != NULL) && (i != n - 1))
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}

