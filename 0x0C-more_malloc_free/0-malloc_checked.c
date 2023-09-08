#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: input
 * Return: 0 (success).
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);
	
	if (b == NULL)
	{
		exit(98);
	}
	return (mem);
}
