#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int z;
	int p;

	for (z = 0; dest[z] != '\0'; z++)
	{
	}
	for (p = 0; src[p] != '\0'; p++)
	{
		dest[z++] = src[p];
	}
	dest[z] = '\0';
	return (dest);
}
