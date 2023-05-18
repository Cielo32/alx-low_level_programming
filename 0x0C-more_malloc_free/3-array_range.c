#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - A function that creates an array of integers
 * @min: Mimimum value
 * @max: Maximum value
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *z;
	int a, b;

	if (min > max)
	{
		return (NULL);
	}
	b = max - min + 1;
	z = malloc(sizeof(int) * b);
	if (z == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < b; a++)
	{
		z[a] = min;
		min++;
	}
	return (z);
}

