#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 1-100, Fizz for multiple of 3
 * Buzz for multiple of 5 and FizzBuzz for both
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("%s", "Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
