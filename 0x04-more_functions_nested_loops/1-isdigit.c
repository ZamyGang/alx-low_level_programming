#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function that checks for a digit
 * @c: the digit to print
 * Return: 0 (Succes)
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
