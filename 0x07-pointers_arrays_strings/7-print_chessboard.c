#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			if (c == 7)
			{
				_putchar(a[b][c]);
				_putchar('\n');
			}
			else
				_putchar(a[b][c]);
		}
	}
}
