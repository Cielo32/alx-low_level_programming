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

	if (size <= 0)
	{
		return (-1);
	}
	for (z = 0; z < size; z++)
	{
		if (cmp(array[z]))
		{
			return (z);
		}
	}
	return (-1);
}
