#include <stdio.h>
/**
 * Main - Entry point
 *
 * Description: This function prints a message using the printf functions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %c byte\n", char);
	printf("Size of an int: %d byte\n", b);
	printf("Size of a long int: %d byte\n", c);
	printf("Size of a long long int: %d byte\n", d);
	printf("Size of a float: %f byte"\n, e);

	return (0);
}
