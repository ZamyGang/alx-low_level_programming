#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function that prints the name of the file iw was
 * compiled from, followed by a new line.
 * Return: 0 (success).
 */
int main(void)
{
	printf("%s", __FILE__);
	return (0);
}
