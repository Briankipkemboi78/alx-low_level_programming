#include "main.h"
#include <stdio.h>

/**
*main - prints all arguments passed on to it followed by a newline
*
*@argc:arguments count
*@argv:arguments vector
*
*Return:0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
