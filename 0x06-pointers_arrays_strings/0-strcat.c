#include "main.h"
#include <stdio.h>

/**
 * _strcat - A function that concatenates two strings
 * @dest: The destination string
 * @src: Source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int destlength = 0, r;

	while (dest[destlength] != '\0')
	{
		destlength++;
	}
	for (r = 0; src[r] != '\0'; r++)
	{
		dest[destlength] = src[r];
		destlength++;
	}
	dest[destlength] = '\0';
	return (dest);
}
