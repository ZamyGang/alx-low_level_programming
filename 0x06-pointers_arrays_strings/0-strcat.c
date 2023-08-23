#include "main.h"
#include <stdio.h>
/**
 * *_strcat - A function that concatenates two strings.
 *
 * @dest : inpiut
 * @src : input
 * return: (_strcat)
 *
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';

	return (dest);
}