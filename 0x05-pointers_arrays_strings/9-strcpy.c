#include "main.h"

/**
*_strcpy - copy strings from source arr to destination arr
*
*@dest: destination array
*@src: source array
*
*Return: pointer to destination array
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\n')
	{
		*(dest + i) = src[i];
		i++;
	}

	*(dest + i) = '\0';
	return (dest);
}
