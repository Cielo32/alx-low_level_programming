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
	int length = 0, r;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (r = 0; src[r] != '\0'; r++)
	{
		dest[length] = src[r];
	}
	dest[length] = '\0';
	return (dest);
}
