Write a script that runs a C file through the preprpcessor and save 
the result into another file.
0. Prepocessing
#!/bin/bash
gcc -E $CFILE -o c

Write a script that compile a C file but does not link
1. Compiler
#!/bin/bash
gcc -c $CFILE

Write a script that generates the assembly code of a C code and save 
it in an output file.
2. Assembler
#!/bin/bash
gcc -S $CFILE

Write a script that compiles a C file and creates an executable named 
cisfun
3. Name
#!/bin/bash
gcc $CFILE -o cisfun

Write a C program that prints exactly "Programming is like building a 
multilingual puzzle, followed by a new line.
4. Hello, puts
include <stdio.h>
/**
 * Main - Entry point
 * This fucntion prints a message using the puts function.
 * Return: 0 on succssful execution
 */
int main(void)
{
	char str[] = "\"Programming is like building a multilingual puzzel";
	puts(str)
	return (0);;
}

Write a C program that prints exactly with proper grammar, but the outcome 
is a piece of art, followed by a new line.
5. Hello, printf
#include <stdio.h>
/**
 * main - Entry point
 * Description: This function prints a message using the printf function.
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}

Write a C program that prints the size of various types on the computer it is
compiled and run on.
6. Size is on grandeur, and territory doesnot make a nation.
#include <stdio.h>
/**
 * main - Entry point 
 * Description: This function prints the sizes of different data types using 
 * the printf function.
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d,
	float e;
	
	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf()
}
