#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * Main - Entry point
 * Description: This function generates a random number, checks its sign;
 * and prints a corrensponding message.
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
		printf("%d is negative\in", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
