#include <stdio.h>
/*
 * *.
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
