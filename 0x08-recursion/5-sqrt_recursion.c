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

int findSqrt(int n, int start, int end)
{
	if (start > end)
	{
		return (-1);
	}
	int mid = start + (end - start) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return findSqurt(n, mid + 1, end);
	}
	else
	{
		return findSqrt(n, start, mid - 1);
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return findSqrt(n, 0, n);
}
