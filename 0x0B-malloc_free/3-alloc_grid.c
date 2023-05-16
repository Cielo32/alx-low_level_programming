#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: Input
 * @height: Input
 * Return: If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int b, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(width * sizeof(int *));
		if (a[b] == NULL)
		{
			for (c = 0; c < b; c++)
				free(a[c]);
			free(a);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			a[b][c] = 0;
	}
	return (a);
}
