#include "main.h"
/**
 * print_most_numbers - print the numbers,from 0 to 9, followed by a new
 *			line.
 * Return: 0 (success)
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
