#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase and uppercase alphabets
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	for (lower = 'a'; lower <= 'z' ; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A' ; upper <= 'Z' ; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
