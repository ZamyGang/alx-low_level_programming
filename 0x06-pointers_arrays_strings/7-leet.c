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
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";

	int i = 0;
	int j;

	while (*(str + i) != '\0'')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(str + i) == a[j])
			{
				*(str + i) = n[j];
			}
		}
		i++;
	}
}
