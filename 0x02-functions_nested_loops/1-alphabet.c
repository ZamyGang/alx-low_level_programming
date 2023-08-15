#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * A function that prints alphabets in lower case
 *
 * Return: 0 (Success)
 */
int main(void)
{
	for (int i = 97 ; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
