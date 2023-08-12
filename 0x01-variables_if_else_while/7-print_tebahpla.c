#include <stdio.h>
/**
 */
int main(void)
{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(strrev(a));
	}
	putchar('\n');
	return (0);
}
