#include "main.h"
#include <stdio.h>
/**
 * _isupper - A function that checks for uppercase character.
 *
 * Return: 0 (success)
 */

int _isupper(int c)
{
	if ( c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
