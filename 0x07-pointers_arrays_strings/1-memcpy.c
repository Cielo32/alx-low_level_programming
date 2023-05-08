#include "main.h"
#include <stdio.h>

/**
 * _memcpy - A function that copies memory area
 * @dest: Input
 * @src: Input
 * @n: Input
 * Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
