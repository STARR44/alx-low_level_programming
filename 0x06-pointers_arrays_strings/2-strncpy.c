#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of source string
 * return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
