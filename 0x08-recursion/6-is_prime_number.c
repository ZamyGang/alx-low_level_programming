#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - A function that returns 1 if the integer is a
 * prime number, otherwise return 0.
 * isdivisible - A function that checks if a number is divisible by a
 * given divisor
 * @n: input
 * @division: input
 * Return: 0 (success)
 *
 */

int isdivisible(int n, int division)
{
	if (division == 1)
	{
		return (0);
	}
	if (n % division == 0)
	{
		return (1);
	}
	return (isdivisible(n, division - 1));
}
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!isdivisible(n, n - 1));
}
