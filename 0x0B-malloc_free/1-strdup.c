#include "main.h"
/***
 *
 *
 *
 *
 */
int _strlen (char *s)
{
	int a;
	for (a = 0; s[a] != '\0'; a++)
	{
		
	}
	return (a);
}

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, a;

	dest_len = _strlen(dest);
	for (a = 0 ; a < n && src[a] != '\0'; a++)
		dest[dest_len + a] = src[a];
	return (dest);
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
