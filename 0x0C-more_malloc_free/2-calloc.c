#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - A function that allocates memory for an array,
 * using malloc
 * @nmemb: number of elements in the array
 * @size: Size of each element
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;
	int a = 0, b = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = nmemb * size;
	z = malloc(b);
	if (z ==  NULL)
		return (NULL);
	while (a < b)
	{
		z[a] = 0;
		a++;
	}
	return (z);
}
