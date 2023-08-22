#include "main.h"
#include <stdio.h>
/**
 * puts2 - a function the prints every other character of a string,
 * starting with the first character followed by new line.
 * @str: input
 *
 * Return: 0 (success)
 *
 */
void puts2(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (b = 0; a < b; b += 2)
	{
		_putchar(str[a]);
	}
	_putchar(str[a]);
}
