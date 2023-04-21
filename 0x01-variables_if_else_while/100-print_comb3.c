#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i, m;

	for (i = 0; i < 10; i++)
	{
		for (m = i + 1; m < 10; m++)
		{
			putchar(i + '0');
			putchar(m + '0');

			if (i < 9 || m < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
