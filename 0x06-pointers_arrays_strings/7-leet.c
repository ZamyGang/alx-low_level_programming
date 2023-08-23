#include "main.h"
#include <stdio.h>
/**
 * *leet - A function that encodes a string into 1337.
 * @str: input
 * Return: str (success)
 *
 */
char *leet(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		char c = *ptr;

		if ((c == 'a' || c == 'A') ||
			(c == 'e' || c == 'E') ||
			(c == 'o' || c == 'O') ||
			(c == 't' || c == 'T') ||
			(c == 'l' || c == 'L'))
			{
			if (c == 'a' || c == 'A')
			{
				*ptr = '4';
			}
			else if (c == 'e' || c == 'E')
			{
				*ptr = '3';
			}
			else if (c == 'o' || c == 'O')
			{
				*ptr = 'O';
			}
			else if (c == 'l' || c == 'L')
			{
				*ptr = '1';
			}
		}
			ptr++;
	}
	return (str);
}
