#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10
 * using the putchar function and no char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base;

	for (base = 0; base < 10; base++)
	{
		putchar((base % 10) + '0');
	}
		putchar('\n');
	return (0);
}
