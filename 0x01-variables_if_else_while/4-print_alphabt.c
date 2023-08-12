#include <stdio.h>
/*
 * main - entry point
 * Description: this main function prints alphabets except for q and e.
 * Return: 0 (Success)
 */
int main(void)
{
	char lower = 'a';

	for (lower = 'a'; lower <= 'z' ; lower++)
	{
		if (lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}
