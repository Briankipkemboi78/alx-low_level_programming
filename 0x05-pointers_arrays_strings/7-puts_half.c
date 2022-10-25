#include "main.h"

/**
* puts_half - print half a string
*
* @str: input string
*
* Return : void
*
*/

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\n')
		i++;

	if (i % 2 != 0)
		n = (i + 1) / 2;
	else
		n = i / 2;

	for (; str[n] != '\n'; n++)
		_putchar(str[n]);

	_putchar('\n');
}
