#include "main.h"
#include <stdio.h>

int check_prime(int n, int k);
/**
 * is_prime_number - A function that returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: Number to value
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - check if number is prime
 * @n: The number to be checked
 * @k: The iteration times
 * Return: 1 for prime or 0 composite
 */
int check_prime(int n, int k)
{
	if (n <= 1)
		return (0);
	if (n % k == 0 && k > 1)
		return (0);
	if ((n / k) < k)
	{
		return (1);
	}
	return (check_prime(n, k + 1));
}
