#include "main.h"
#include <stdio.h>

int check_pal(char *s, int k, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - A function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: String
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters recursively for palindrome
 * @s: String
 * @k: Iterator
 * @l: Length of string
 * Return: 1 if plaindrome, 0 if not
 */
int check_pal(char *s, int k, int l)
{
	if (*(s + k) != *(s + l - 1))
		return (0);
	if (k >= l)
		return (1);
	return (check_pal(s, k + 1, l - 1));
}

