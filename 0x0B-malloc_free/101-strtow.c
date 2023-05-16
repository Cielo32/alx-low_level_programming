#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * count_words - Helper function to count the number of words in a string
 * @str: String to eavaluate
 * Return: number of words
 */
int count_words(char *str)
{
	int count = 0;
	int word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			word = 0;
		}
		else if (!word)
		{
			word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * strtow - Write a function that splits a string into words
 * @str: string
 * Return: NULL if str == NULL or str == ""
 * if function fails, it should return NULL
 */
char **strtow(char *str)
{
	int words, index, t;
	char *a;
	char **is;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	is = malloc(sizeof(char *) * (words + 1));
	if (is == NULL)
		return (NULL);
	index = 0;
	a = strtok(str, " ");
	while (a != NULL)
	{
		is[index] = strdup(a);
		if (is[index] == NULL)
		{
			for (t = 0; t < index; t++)
				free(is[t]);
			free(is);
			return (NULL);
		}
		index++;
		a = strtok(NULL, " ");
	}
	is[index] = NULL;
	return (is);
}
