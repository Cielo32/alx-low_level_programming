#include "main.h"

/**
 * puts_half - A function that prints half of a string, followed by a new line
 * @str: String
 * Return: void
 */
void puts_half(char *str)
{
	int length, index, n;

	length = 0;
	for (n = 0; str[n] != '\0'; n++)
		length++;

	index = (length / 2);

	if ((length % 2) == 1)
		index = ((length + 1) / 2);

	for (n = index; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
