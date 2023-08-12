#include <stdio.h>
/*
 * main - entry point
 * Description: print the base number
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
