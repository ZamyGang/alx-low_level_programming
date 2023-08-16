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
		write(1,n % 10 ,10);
		return (n);
	}
	else
	{
		return (-n);
	}
}
