#include <stdio.h>
/**
 * Main - entry point
 * Description: this function prints the alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
