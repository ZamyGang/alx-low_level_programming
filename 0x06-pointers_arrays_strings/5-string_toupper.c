#include "main.h"
#include <stdio.h>
/**
 * string_toupper - A function that changes all lowercase letters of
 * a string to uppercase.
 * @str: input
 * return: 0 (success)
 *
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return (str);
}
