#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers
 * @n: Number of integers passed to the function
 * @...: Integers to print
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (index--)
		printf("%d%s", va_arg(args, int),
				index ? (separator ? separator : "") : "\n");
	va_end(args);
}
