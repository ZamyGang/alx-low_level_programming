#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - functions that returns the length of a string.
 * @s: input
 *
 * Return: 0 (success)
 *
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
