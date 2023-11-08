#include "main.h"

/**
 * _strcpy - a function that copies a string from src to dest
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int p;

	for (p = 0; src[p] != '\0'; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';
	return (dest);
}
