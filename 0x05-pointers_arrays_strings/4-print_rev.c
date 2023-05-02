#include "main.h"
#include <stdio.h>

/**
 * print_rev - A function that prints a string
 * in reverse, followed by a new line
 * @s: String
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0, c;

	while (*(s + len) != '\0')
		len++;
	for (c = len - 1; c >= 0; c--)
		putchar(*(s + c));
	putchar('\n');
}
