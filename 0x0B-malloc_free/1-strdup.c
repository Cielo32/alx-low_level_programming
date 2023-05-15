#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate of the string
 * @str: character
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *z;
	int a, b = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[b])
	{
		b++;
	}
	z = malloc((b + 1) * sizeof(char));
	if (z == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= b; a++)
	{
		z[a] = str[a];
	}
	return (z);
}
