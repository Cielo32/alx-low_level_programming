#include "main.h"
#include <stdio.h>

/**
 * _atoi - A function that convert a string to an integer
 * @s: The pionter
 * Return: An integer
 */
int _atoi(char *s)
{
	int x = 0;
	int m = 1;
	int r = 0;
	unsigned int n = 0;

	while (s[x])
	{
		if (s[x] == '-')
		{
			m *= -1;
		}
		while (s[x] >= '0' && s[x] <= '9')
		{
			r = 1;
			n = (n * 10) + (s[x] - '0');
			x++;
		}
		if (r == 1)
		{
			break;
		}
		x++;
	}
	n *= m;
	return (n);
}
