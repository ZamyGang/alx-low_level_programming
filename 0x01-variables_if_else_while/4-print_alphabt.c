#include <stdio.h>

int main (void)
{
	char lower = 'a';
	for (lower = 'a'; lower <= 'z' ; lower++)
	{
		if(lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}
