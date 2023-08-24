#include "main.h"
#include <stdio.h>
/**
 * string_toupper - A function that changes all lowercase letters of a
 * string to uppercase.
 * @a: input
 * Return: 0 (success)
 */
char *string_toupper(char *a)
{
	int j = 0;

	while (*(a + j) != '\0')
	{
		if (*(j + a) >= 'a' && *(a + j) <= 'z')
		{
			*(a + j) = *(a + j) - 32;
		}
		j++;
	}
	return (a);
}
