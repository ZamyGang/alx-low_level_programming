#include <stdarg.h>
#include <stdio.h>
/*
 *
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int a, sum;

	if (n != NULL)
	{
		va_start(ap , n);
		sum = 0;
		for (a = 0; a < n; a++)
			sum += va_arg (ap, int);

		va_end (ap);
	}

	if (n == 0)
		return (0);

}
