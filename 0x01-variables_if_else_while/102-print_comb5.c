#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i, n;

	for (i = 0; i <= 99; i++)
	{
		for (n = i; n <= 99; n++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');

			if (i != 99 || n != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
