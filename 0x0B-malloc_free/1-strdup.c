#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/***
 * _strlen - return the lengh of a string.
 * _strdup - function to return pointer to string
 * @s: char type
 * @str: input
 * Return: lenght of string
 * Return: 0 (success)
 *
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

char *_strdup(char *str)
{
	char *ptr;
	int size;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	x = 0;
	while (x < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
	}
		ptr[x] = str[x];
		x++;
	}
	return (ptr);
}
