#include "main.h"
#include <stdio.h>
/**
 * print_rev - A function that prints a string, in reverse, followed by a
 * new line
 * @s: input
 * Return: 0 (success)
 *
 */
void print_rev(char *s)
{
	int a, b, length;

	while (s[a] != '\0')
	{
		i++;
	}

	length = a;

	for (b = length - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
