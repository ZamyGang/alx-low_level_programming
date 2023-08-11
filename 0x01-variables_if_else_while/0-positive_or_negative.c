#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * Main - Entry point
 * Description: A function that print a message depending on the condition
 *
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
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is Negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
