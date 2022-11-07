#include <stdio.h>

/**
* main - prints the program name ,follwed by a new line.
* @argc: The number of arguments provided to the program
* @argv: An array of pointers to the arguments
*
* Return : 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
