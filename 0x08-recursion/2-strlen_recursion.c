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
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}
