#include "main.h"
#include <stdio.h>
/*
 * Main - Entry point
 *
 * A function that checks for lowercase characters.
 *
 * Return 1 success
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
