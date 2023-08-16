#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: 0 Success
 *
 */
void times_table(void)
{
	int number, multiple, answer;

	for (number = 1; number <= 9; number++)
	{
		_putchar('0');

		for (multiple = 1; multiple <=9; multiple++)
		{
			
			_putchar(',');
			_putchar(' ');

			answer = number * multiple;

			if (answer <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((answer / 10) + '0');
			}
			
			_putchar((answer % 10) + '0');
		}
		_putchar('\n');
	}
}
