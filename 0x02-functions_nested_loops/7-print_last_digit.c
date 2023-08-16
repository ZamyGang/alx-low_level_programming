#include "main.h"
#include <stdio.h>


int print_last_digit(int n)
{
	int n = n % 10;

	if (n < 0)
	
		n *= -1;
		printf("%d",n );
}
