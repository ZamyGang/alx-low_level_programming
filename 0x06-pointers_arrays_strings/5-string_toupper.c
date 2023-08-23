#include "main.h"
#include <stdio.h>
/**
 *
 *
 */
char *string_toupper(char *str)
{
	char *ptr= str;
	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return (str);
}
