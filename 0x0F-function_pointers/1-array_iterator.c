#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - maps an array through a func pointer
 * @array: int array
 * @size: array size
 * @action: Function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *a = array + size - 1;

	if (array && size && action)
		while (array <= a)
			action(*array++);
}
