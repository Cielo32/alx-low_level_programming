#include "main.h"
#include <stdio.h>

/**
 * leet - A Write a function that encodes a string into 1337
 * @n: Input
 * Return: n value
 */
char *leet(char *n)
{
	int k, l;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "44337011";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (l = 0; s1[l] != '\0'; l++)
		{
			if (n[k] == s1[l])
			{
				n[k] = s2[l];
				break;
			}
		}
	}
	return (n);
}
