#include <stdio.h>
/*
 * *.
 */
int main(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		a = getchar();
		putchar(a);
	}
	putchar('\n');
	return (0);
}
