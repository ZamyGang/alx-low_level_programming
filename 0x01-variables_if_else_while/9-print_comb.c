#include <stdio.h>
/**
 */
int main(void)
{
	int a;

	for (a = 48; a < 58 ; a++)
	{
		putchar(a);

		putchar(',');
		
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
