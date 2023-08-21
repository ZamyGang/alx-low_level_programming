#include "main.h"
#include <stdio.h>
/**
 * rev_string - write a function that reverses a string.
 *
 * @s: input
 *
 * Return: 0 (success)
 *
 */
void rev_string(char *s)
{
	char temp;
	int a, b, c;

	b = 0;
	c = 0;

	while (s[b] != '\0')
	{
		b++;
	}

	c = b - 1;

	for (a = 0; a < b / 2; a++)
	{
		temp = s[a];
		s[a] = s[c];
		s[c--] = temp;
	}
}
