#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet using the putchar function.
 *
 * Return: Always 0 (Success)
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
