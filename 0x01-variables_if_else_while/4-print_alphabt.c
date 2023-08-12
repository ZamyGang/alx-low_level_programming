#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet except letters q and e
 *              using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';

	for (lower = 'a'; lower <= 'z' ; lower++)
	{
		if (lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}
