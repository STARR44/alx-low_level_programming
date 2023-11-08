#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes in the source string
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
