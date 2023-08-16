#include "main.h"
/*
 *
 *
 *
 *
 */
int print_last_digit(int n)
{
	int n = n % 10;
	if (n <= 0)
	{
		printf("%d",n);
		return (n);
	}
	else
	{
		return (-n);
	}
}
