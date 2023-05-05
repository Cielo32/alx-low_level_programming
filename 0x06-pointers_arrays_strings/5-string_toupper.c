#include "main.h"
#include <stdio.h>

/**
 * string_toupper - A function that changes all lowercase letters
 * of a string to uppercase
 * @str: String
 * Return: String
 */
char *string_toupper(char *str)
{
	int r = 0;

	while (str[r])
	{
		if (str[r] >= 'a' && str[r] <= 'z')
		{
			str[r] -= 32;
			r++;
		}
	}
	return (str);
}
