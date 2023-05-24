#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 * Return: The integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z = 0;

	if (array && size && cmp)
		while (z < size)
		{
		if (cmp(array[z]))
			return (z);
		z++;
		}
	return (-1);
}
