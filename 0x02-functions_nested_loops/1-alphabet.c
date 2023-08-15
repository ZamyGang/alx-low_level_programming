#include "main.h"
/**
 * main - entry point
 *
 * A function that prints alphabets in lower case
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	
	return (0);
}
