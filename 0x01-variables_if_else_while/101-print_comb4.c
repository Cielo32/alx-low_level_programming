#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int l, m, n;

	for (l = 0; l <= 7; l++)
	{
		for (m = l + 1; m <= 8; m++)
		{
			for (n = m + 1; n <= 9; n++)
			{
				putchar(l + '0');
				putchar(m + '0');
				putchar(n + '0');

				if (l != 7 || m != 8 || n != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
