#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long j = 1, k = 2, sum;

	printf("%lu, %lu, ", j, k);

	for (i = 3; i <= 50; i++)
	{
		sum = j + k;
		printf("%lu", sum);

		if (i < 50)
			printf(", ");
		else
			printf("\n");
		j = k;
		k = sum;
	}
	return (0);
}
