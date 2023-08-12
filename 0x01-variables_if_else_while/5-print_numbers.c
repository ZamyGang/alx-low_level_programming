#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0 ; a < 10 ; a++)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
