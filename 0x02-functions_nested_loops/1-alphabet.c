#include "main.h"

/**
 * print_alphabet: prints a to z
 *
 * Description: prints the alphabets in lowercase followed by a newline
 *
 * Return: void
 */
void print_alphabet(void)
{
	char at;

	for (at = 'a'; at <= 'z'; at++)
	{
		_putchar(at);
	}
	_putchar('\n');
}
