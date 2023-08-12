#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * Main - Entry point
 * This program generates a random integer 'n' and determines its last digit.
 * It categorizes the digit as greater than 5, equal to 0, or less than 6 but not * 0.
 * The random number generator is seeded with the current time for randomness.
 * This program demonstrates the usage of random numbers, arithmetic operations,
 * and conditionals in C.
 * Return: (0) Success
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
