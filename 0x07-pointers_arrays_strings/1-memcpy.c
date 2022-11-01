#include "main.h"

/**
*_memcpy - copy memory to memory area
*@dest: pointer to params
*@src: pointer to char params
*@n: size of the char
*Return: *dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
