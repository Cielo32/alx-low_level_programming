#include "variadic_functions.h"

/**
 * print_all - Function that prints anything.
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		switch (*format)
		{
			case 'c':
			{
				char c = va_arg(args, char);
				printf("%c", c);
				break;
			}
			case 'i':
			{
				int i = va_arg(args, int);
				printf("%d", i);
				break;
			}
			case 'f':
			{
				float f = va_arg(args, float);
				printf("%f", f);
				break;
			}
			case 's':
			{
				char *s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
			}
			default:
			{
				break;
			}
		}
		format++;
	}
	printf("\n");
	va_end(args);
}
