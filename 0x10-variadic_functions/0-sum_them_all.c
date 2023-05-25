#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: The number of arg
 * @...: int to sum
 * Return: The sum of all the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	int index = n, total = 0;
	va_list args;

	if (!n)
	{
		return (0);
	}
	va_start(args, n);
	while (index--)
		total += va_arg(args, int);
	va_end(args);
	return (total);
}
