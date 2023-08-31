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
int findSqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > 0)
	{
		return (-1);
	}
	return findSqrt(n, guess + 1);
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return findSqrt(n, 0);
}
