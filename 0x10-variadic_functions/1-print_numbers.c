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
	unsigned int index;

	va_start(args, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (index = 0; index < n; index++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("\n");
	va_end(args);
}
