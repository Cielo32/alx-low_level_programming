#include "main.h"
#include <stdio.h>

/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: array
 * @n: The number of elements of the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int r, z;

	for (r = 0; r < n / 2; r++)
	{
		z = a[r];
		a[r] = a[n - r - 1];
		a[n - r - 1] = z;
	}
}
