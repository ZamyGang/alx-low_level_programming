#include <stdio.h>
/*
 * Main - Entry point
 * Description: A function that print a message depending on the condition
 *
 * Return (0) Success
 *
 */
int main(void)
{
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is Negative", n);
	}
	else(n = 0)
	{
		printf("%d is zero", n);
	}
	return (0);
}