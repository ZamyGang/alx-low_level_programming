#include "main.h"
#include <stdio.h>
/**
 * reverse_array -  A function that reverses the content of array of
 * integers.
 * @a: input
 *
 * @n: input
 * Return: 0 (success)
 *
 */
void reverse_array(int *a, int n)
{
	int start = 0;

	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
