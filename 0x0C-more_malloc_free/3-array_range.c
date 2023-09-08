#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - A function that an array of integers.
 * @min: input
 * @max: input
 * Return: 0 (success)
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
