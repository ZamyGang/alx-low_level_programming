#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */
bool separators(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}

char *cap_string(char *str)
{
	char *ptr = str;
	bool new_word = true;

	while (*ptr != '\0')
	{
		if (new_word && islower(*ptr))
		{
			*ptr = toupper(*ptr);
			new_word = false;
		}
		else if (separators(*ptr))
		{
			new_word = true;
		}
		ptr++;
	}
	return (str);
}
