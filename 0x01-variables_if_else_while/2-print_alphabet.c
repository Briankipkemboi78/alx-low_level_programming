#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block of code
 * Description : This is to get a random number and checks its last digit and compare it to 5
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
