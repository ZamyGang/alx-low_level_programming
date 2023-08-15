#include "main.h"
/*
 * main - entry point
 *
 *
 *
 * return: (1) success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if(n < -1)
	{
		printf("-1");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}
