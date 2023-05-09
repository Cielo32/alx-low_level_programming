#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: Input
 * @size: Input
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int r, z, sum1 = 0, sum2 = 0;

	for (r = 0; r <= (size * size); r = r + size + 1)
		sum1 = sum1 + a[r];

	for (z = size - 1; z <= (size * size) - size; z = z + size - 1)
		sum2 = sum2 + a[z];
	printf("%d, %d\n", sum1, sum2);
}
