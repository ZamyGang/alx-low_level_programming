#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - A function that returns the sum of all
 * its parameters.
 * @n: input
 * @...: input
 * Return: 0 (success).
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int a, sum;

	va_start(numbers, n);

	sum = 0;

	for (a = 0; a < n; a++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
