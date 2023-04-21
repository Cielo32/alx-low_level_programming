#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char teba;

	for (teba = 'z'; teba >= 'a'; teba--)
	{
		putchar(teba);
	}
	putchar('\n');
	return (0);
}
