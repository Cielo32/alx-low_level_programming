#include "variadic_functions.h"

/**
 * format_char - Formats character
 * @separator: String separator
 * @ap: Argument pointer
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}
/**
 * format_int - Fprmats integer
 * @separator: String separator
 * @ap: argument pointer
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}
/**
 * format_float - Formats float
 * @separator: The string separator
 * @ap: argument pointer
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}
/**
 * format_string - Formats string
 * @separator: The string separator
 * @ap: argument pointer
 */
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
		printf("%s%s", separator, str);
}
/**
 * print_all - Function that prints anything.
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0, b;
	char *seprator = "";
	va_list ap;

	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(ap, format);
	while (format && format[a])
	{
		b = 0;
		while (tokens[b].token)
		{
			if (format[a] == tokens[b].token[0])
			{
				tokens[b].f(seprator, ap);
				seprator = ", ";
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(ap);
}
