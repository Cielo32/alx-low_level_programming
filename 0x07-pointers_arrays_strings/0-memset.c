#include "main.h"
#include <stdio.h>

/**
 * _memset - A function that fills memory with a constant byte
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
