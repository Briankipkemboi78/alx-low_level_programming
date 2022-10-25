#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps the value of two integers
* 

* Return: 0
*/
void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
