#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of source string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
