#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - A function that prints a string in reverse.
 * @s: input
 *
 * Return 0 (Success).
 *
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
	reverse(s + 1);
	printf("%c", *s);
	}
}
