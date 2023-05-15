#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: Size of array
 * @c: character to assign
 * Return: Pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int r;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (r = 0; r < size; r++)
	{
		array[r] = c;
	}
	return (array);
}
