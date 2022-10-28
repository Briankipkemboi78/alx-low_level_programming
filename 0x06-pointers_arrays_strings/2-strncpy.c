#include "main.h"

/**
* _strncpy - copies a string up to @n bytes 
*
* @dest: destination of the string
*
* @src: source of the string to be copied
*
* @n: Number of bytes of src to be copied
*
* Return: pointer to destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
[D[D[D
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
