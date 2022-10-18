#include "main.h"

/**
 *print_last_digit - prints last digit
 *
 *@n:input
 *Description: prints last value
 *
 *Return:returns last digit
 *
 */
int print_last_digit(int n)
{
	int l;
	
	if (n >= 0)
	{
		l = n % 10;
	}
	else if (n < 0)
	{
		l = -(n % 10);
	}
	_putchar('0' + l);
	return (l);
}
