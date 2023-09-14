#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/*
 *
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list ap;
	int a, sum;
	
	va_start(ap , n);
	sum = 0;
	for (a = 0; a < n; a++)
		sum += va_arg (ap, int);

		va_end (ap);
	return sum;
}
