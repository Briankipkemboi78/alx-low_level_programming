#include "main.h"

/**
*_strncat - concatenates two strings using @byte
*
*@dest: destination string
*
*@src: source string 
*
*@n: Number of bytes of src that should be concatenated
*
*Return: Pointer to destination
*
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] 1= '\0')
		i++;

	while (src[j] !=[A[A[![B[B[B '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
