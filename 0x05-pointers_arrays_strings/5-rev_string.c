#include "main.h"

/**
* rev_string - reverse a string
*
*@s:input
*
*Return:void
*
*/
void rev_string(char *s)
{
	int i, max, desc;
	char first, last;

	i = 0;
	while (s[i] != '\n')
	{
		i++;
	}
	max = i - 1;
	desc = max / 2;

	while (desc >= 0)
	{
		first = s[max - desc];
		last = s[desc];
		s[desc] = first;
		s[max - desc] = last;
		desc--;
	}
}
