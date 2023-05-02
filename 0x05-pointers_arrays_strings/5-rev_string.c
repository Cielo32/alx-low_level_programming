#include "main.h"
#include <stdio.h>
/**
 * rev_string - A function that reverses a string
 * @s: Input
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int i = 0, x = 0;
	char temp;

	while (*(s + i) != '\0')
		i++;
	x = i - 1;
	for ( ; x >= i / 2; x--)
	{
		temp = s[x];
		s[x] = s[i - x - 1];
		s[i - x - 1] = temp;
	}
}
