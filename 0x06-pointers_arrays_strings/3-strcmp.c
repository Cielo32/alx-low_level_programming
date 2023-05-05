#include "main.h"
#include <stdio.h>

/**
 * _strcmp - A function that compares two strings
 * @s1: Input value
 * @s2: Input value
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
