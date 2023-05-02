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
	int len = 0;
	int c;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	c = len - 1;
	while (c >= 0)
	{
		putchar(s[c]);
		c--;
	}
	putchar('\n');
}
