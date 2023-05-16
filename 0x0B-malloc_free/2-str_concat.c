#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *r;
	int a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	r = malloc((a + b + 1) * sizeof(char));
	if (r == NULL)
		return (r);
	a = b = 0;
	while (s1[a])
	{
		r[a] = s1[a];
		a++;
	}
	while (s2[b])
	{
		r[a] = s2[b];
		a++, b++;
	}
	r[a] = '\0';
	return (r);
}
