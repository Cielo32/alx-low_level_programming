#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - A function that changes all lowercase letters
 * of a string to uppercase
 * @str: String
 * Return: String
 */
char *string_toupper(char *str)
{
	int r;

	for (r = 0; *str != '\0'; r++)
	{
		*str = toupper(*str);
	}
	return (str);
}
