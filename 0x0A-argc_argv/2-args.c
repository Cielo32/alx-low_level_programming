#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Argument coun
 * @argv: Argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
