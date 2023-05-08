#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: Input
 * @accept: Input
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int index, p;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (p = 0; accept[p] != '\0'; p++)
		{
			if (s[index] == accept[p])
				return (s + index);
		}
	}
	return (NULL);
}

