#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * Main - entry point
 *
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("last digit of %d is %d less than 6 and not 0", n);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n);
	}
	return (0);

}
