#include "main.h"
#include <stdio.h>

/**
 * _strncat - A function that concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, r;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	r = 0;
	while (r < n && src[r] != '\0')
	{
		dest[destlen] = src[r];
		r++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
