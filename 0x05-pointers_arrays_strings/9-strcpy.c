#include "main.h"
#include <stdio.h>

/**
 * _strcpy - A function that copies the string pointed to by src
 * @dest: Destination value
 * @src: Source value
 * Return: The  pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;

	for (; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k++] = '\0';
	return (dest);
}
