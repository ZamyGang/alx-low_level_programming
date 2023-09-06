#include "main.h"
/**
 * main - program to print out number of arguments
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: always succesful
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

