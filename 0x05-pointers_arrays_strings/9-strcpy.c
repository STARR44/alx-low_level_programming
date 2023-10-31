#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - a function that copies a string from src to dest
 * @dest: destination
 * src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	printf("dest: %s\n", dest);
	return (dest);
}
