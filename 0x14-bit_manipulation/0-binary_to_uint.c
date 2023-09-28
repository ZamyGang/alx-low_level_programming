#include "main.h"
/*
 * binary_to_uint - A function that converts binary number.
 *
 * @b = input.
 * @number = input.
 * @multiply : input.
 * @length : input.
 *
 * Return: 0 (success).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, multiply = 1;
	int length;

	if (b == '\0')
		return (0);

	for (length = 0; b[length];)
		len++;

	for (length -= 1; len >= 0; len--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		number += (b[length] - '0') * multiply;
		multiply *= 2;
	}

	return (number);
}
