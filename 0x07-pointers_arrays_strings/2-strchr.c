#include "main.h"
#include <stdio.h>

/**
 * _strchr - A function that locates a character in a string
 * @s: Input
 * @c: Input
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return (NULL);
}
