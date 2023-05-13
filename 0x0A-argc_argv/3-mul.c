#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0, g = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		g = atoi(argv[2]);
		printf("%d\n", i * g);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
