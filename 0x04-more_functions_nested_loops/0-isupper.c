#include "main.h"
#include <stdio.h>
/**
 * isupper - A function that checks for uppercase character.
 *
 * Return: 0 (success)
 */

int _isupper(int c)
{
	int c;

	if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
