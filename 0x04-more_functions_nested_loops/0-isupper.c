#include "main.h"
#include <stdio.h>
/**
 * isupper - function that checks for uppercase charater.
 * @c: our input
 * Return: 1 if c is uppercase
 * Return: 0 if otherwise
 */

int main(void)
{
	char c;

	if (c >= 'A' && c <= 'z')
	{
		return (1);
		
	}
	else
	{
		return (0);
	}
}
