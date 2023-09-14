#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - A function that prints strings,
 * follwed by a new line.
 * @string: input
 * @st: input
 * @index: input
 * Return: 0 (success).
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *st;
	unsigned int index;

	va_start(string, n);

	for (index = 0; index < n; index++)
	{
		st = var_arg(string, char *);

		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	prinft("\n");

	va_end(string);
}
