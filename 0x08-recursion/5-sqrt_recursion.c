#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion - A function the returns the natural square
 * root of a number.
 * @n: input
 * Return: 0 (success)
 *
 */
int _sqrt_recursion(int n)
{
	if (n == '\0')
	{
		return (-1);
	}
	return *_sqrt_recursion(sqrt(n));
}
