#include "main.h"

/**
 * main: main code block
 * Description: Print all alphabets in lowercase followed by a new line
 * Return : Void
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
