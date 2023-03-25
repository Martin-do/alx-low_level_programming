#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: the list of types of the argument
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, stop;
	const char *arg_type_s, *separator = ", ";
	va_list ap;

	va_start(ap, format);
	while (((*(format + i) != '\0')))
	{
		if (((*(format + i) == 99) || (*(format + i) == 105)
		|| (*(format + i) == 102) || (*(format + i) == 115)))
		{
			switch (*(format + i))
			{
				case 99:
					printf("%c", va_arg(ap, int));
					break;
				case 102:
					printf("%f", va_arg(ap, double));
					break;
				case 105:
					printf("%d", va_arg(ap, int));
					break;
				case 115:
					arg_type_s = va_arg(ap, char*);
					if (arg_type_s == NULL)
						arg_type_s = "(nil)";
					printf("%s", arg_type_s);
					break;
			}
		}
		va_end(ap);
		i++;
		stop = 0;
		while ((*(format + i) != '\0') && stop != 1)
		{
			printf("%s\n", separator);
			stop++;
		}
	}
	printf("\n");
}
