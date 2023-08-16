#include "main.h"
/*
 *
 *
 *
 *
 */
int print_last_digit(int n)
{
	if (n % 10 <= 0)
	{
		printf("%d",n % 10);
		return (n);
	}
	else
	{
		return (-n);
	}
}
