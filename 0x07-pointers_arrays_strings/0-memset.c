#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: maximum number of bytes to be used
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n && s[z] != '\0'; z++)
	{
		s[z] = b;
	}
	return (s);
}
