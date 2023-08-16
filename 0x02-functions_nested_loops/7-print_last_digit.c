#include "main.h"
#include <stdio.h>


int print_last_digit(int n)
{
	if (n % 10 < 0)
	
		n = -1;
		_putchar(n + '0');
		return (n);
}
