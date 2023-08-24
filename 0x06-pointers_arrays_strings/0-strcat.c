#include "main.h"
#include <stdio.h>
/**
 * _strcat - A function that concatenates two strings.
 * @dest: input
 * @src: input
 * Return: (dest) success;
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
