#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: String to oppend
 * @s2: String to concatenate
 * @n: Number of bytes from s2 to concatenate to s1
 * Return: pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, c = 0, d = 0;

	while (s1 && s1[c])
		c++;
	while (s2 && s2[d])
		d++;
	if (n < d)
	{
		s = malloc((c + n + 1) * sizeof(char));
	}
	else
	{
		s = malloc((c + d + 1) * sizeof(char));
	}
	if (!s)
		return (NULL);
	while (a < c)
	{
		s[a] = s1[a];
		a++;
	}
	while (n < d && a < (c + n))
		s[a++] = s2[b++];
	while (n >= d && a < (c + d))
		s[a++] = s2[b++];
	s[a] = '\0';
	return (s);
}
