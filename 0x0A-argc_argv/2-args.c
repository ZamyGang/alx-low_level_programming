#include <stdio.h>
/**
 * main - program to print arguments on a new line
 * @argc: size of argv array and number of commanf line arguments
 * @argv: An array of size argc
 * Return: always successful
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
