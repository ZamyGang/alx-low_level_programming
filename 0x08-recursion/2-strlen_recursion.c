#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: input
 * @count: input
 * return 0 (success).
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	return 1 + _strlen_recursion(s + 1);
}
