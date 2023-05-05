#include "main.h"
#include <stdio.h>

/**
 * cap_string - A function that capitalizes all words of a string
 * @str: The string
 * Return: A pointer to the changed string
 */
char *cap_string(char *)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == '.' |
				|
