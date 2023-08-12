#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *              separated by ,, followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58 ; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
