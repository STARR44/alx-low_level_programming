#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: source string
 * @dest: destination string
 * @n: maximum number of characters
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		dest[d] = src[d];
	}
	return (dest);
}
