#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - A function that prints the chessboard
 * @a: Array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int r, z;

	for (r = 0; r < 8; r++)
	{
		for (z = 0; z < 8; z++)
			_putchar(a[r][z]);
		_putchar('\n');
	}
}
