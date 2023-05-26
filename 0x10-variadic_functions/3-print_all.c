#include "variadic_functions.h"

/**
 * print_all - Function that prints anything.
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	char *str, *sep = "";
	va_list args;

	va _start(args, format);
	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case'i':
					printf("%d%s", sep, va_arg(list, int));
					break;
				case'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case's':
					str = va_arg(list, char *);
					if (!str)
						str = "nil";
					printf("%s%s", sep, str);
					break;
				default:
					index++;
					continue;
			}
			sep = ",";
			index++;
		}
	}
	printf("\n");
	va_end(args);
}
