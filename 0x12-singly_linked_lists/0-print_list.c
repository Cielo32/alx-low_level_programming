#include "lists.h"

/**
 * _strlen - Returns the length of a string
 * @s: String whose length to check
 * Return: Integer length of string
 */
int _strlen(char *s)
{
	int c = 0;

	if (!s)
		return (0);
	while (*s++)
		c++;
	return (c);
}
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		c++;
	}
	return (c);
}
