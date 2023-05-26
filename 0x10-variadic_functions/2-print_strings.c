#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings, followed by a new line.
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 * @...: Integers to print
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int index = n;
	char *s;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (index--)
		printf("%s%s", (s = va_arg(args, char *)) ? s : "(nil)",
				index ? (separator ? separator : "") : "\n");
	va_end(args);
}
