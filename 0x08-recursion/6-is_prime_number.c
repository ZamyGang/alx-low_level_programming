#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - A function that returns 1 if the integer is a
 * prime number, otherwise return 0.
 * @n: input
 * Return: 0 (success)
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	for (int i = 2; i * i <= n; i++)
	{
		if (n% i == 0)
		{
			return (0);
		}
	}
	return (1);
}
