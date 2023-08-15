#include "main.h"
/*
 * main - entry point
 *
 *
 *
 * return: (1) success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if(n < -1)
	{
		
		_putchar(34 + '1');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
