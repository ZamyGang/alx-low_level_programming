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

	printf("Size of a char: %c byte", a);
	printf("Size of an int: %d byte", b);
	printf("Size of a long int: %d byte", c);
	printf("Size of a long long int: %d byte", d);
	printf("Size of a float: %f byte", e);

	return (0);
}
