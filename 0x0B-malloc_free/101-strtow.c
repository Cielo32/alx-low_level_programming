#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * count_word - Helper function to count the number of words in a string
 * @s: String to eavaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int count = 0;
	int word = 0;
	int flag = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word++;
		}
	}
	return (word);
}
/**
 * strtow - Write a function that splits a string into words
 * @str: string to split
 * Return: NULL if str == NULL or str == ""
 * if function fails, it should return NULL
 */
char **strtow(char *str)
{
	char **m, *t;
	int i, k = 0, l = 0, w, c = 0, s, e;

	while (*(str + l))
		l++;
	w = count_word(str);
	if (w == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (w + 1));
		if (m == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				t = (char *)malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (s < e)
					*t++ = str[s++];
				*t = '\0';
				m[k] = t - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			s = i;
	}
	m[k] = NULL;
	return (m);
}
