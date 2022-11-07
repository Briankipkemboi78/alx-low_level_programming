#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*main - program that prints product of two integers
*
*@argc: argument count
*@argv: argument vector
*
*Return: 0
*
*/

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

[A[A[B[3~[3~[C[C[C[C[C[C[C[C[C[C
[A[		for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);

		printf("%d\n", j);
	}
	return (0);
}
