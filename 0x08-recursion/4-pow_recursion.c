#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - A function that returns the value of x
 * raised to the power of y.
 * @y: input
 * @x: input
 * Return: 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
