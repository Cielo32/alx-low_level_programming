#include "main.h"
#include <stdio.h>

/**
 * _strncpy - A function that copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int r = 0;

	while (r < n && src[r] != '\0')
	{
		dest[r] = src[r];
		r++;
	}
	for (;r < n; r++)
	{
		dest[r] = '\0';
		r++;
	}
	return (dest);
}
