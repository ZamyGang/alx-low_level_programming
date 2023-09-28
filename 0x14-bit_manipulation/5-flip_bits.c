#include "main.h"
/**
 * flip_bits - A function that returns the number of bits to flip to get
 * from one number to another.
 * @n: input.
 * @m: input.
 * Return: 0 (success).
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
