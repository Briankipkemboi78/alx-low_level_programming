#include <stdio.h>

/**
 * main - calculate largets prime of 612852475143
 *
 * Return : Success Always
 */

int main(void)
{
	long int x = 612852475143;
	long int pn;

	for (pn = 2; pn < x; pn++)
{
		if (x % pn == 0)
		{
			x = x / pn;
		}
	}
	printf("%id\n", pn);
	return (0);
}
