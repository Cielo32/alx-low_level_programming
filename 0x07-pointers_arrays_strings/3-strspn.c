#include "main.h"
#include <stdio.h>

/**
 * _strspn - A  function that gets the length of a prefix substring
 * @s: Input
 * @accept: Input
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l, p, value, check;

	value = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		check = 0;

		for (p = 0; accept[p] != '\0'; p++)
		{
			if (accept[p] == s[l])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
			return (value);
	}
	return (value);
}
