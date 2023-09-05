#include "main.h"
/**
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t total_len = len1 + len2 + 1;

	char *concatenated = (char *)malloc(total_len);

	if (concatenate == NULL)
	{
		return (NULL);
	}

	strcpy(concatenated, s1);
	strcpy(concatenated, s2);

	return (concatenated);
}
