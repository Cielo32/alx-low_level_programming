#include "main.h"
#include <stdio.h>

/**
 * _puts - A function that prints a string
 * followed by a new line, to stdout
 * @str: The string of print
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
