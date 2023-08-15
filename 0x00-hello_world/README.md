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
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(e));

	return (0);
}
Write a script that generates the assembly code (intel syntax) of a C 
code and save it in an output file.
7. Intel
#!/bin/bash
gcc -S -masm=intel $CFILE

8. UNIX is basically a simple operating system, but you have to be a genius
to understand the simplicity 
#include <unistd.h>
/**
 * main - Prints "and that piece of art is useful - Dora Korpar, 2015-10-19",
 * followed by a new line, to standard error.
 * Return: Always 1.
 */
int main(void)
{
	write(2 , "and that piece of art useful\" - Dora Korpar, 2015-10-19\n", 
		59;
	return (1);
)
}
