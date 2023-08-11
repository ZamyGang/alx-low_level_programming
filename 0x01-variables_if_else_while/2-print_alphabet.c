#include <stdio.h>
/*
 * main - entry
 * Description: this function prints alphabets using the putchar function
 * return (0) success
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
