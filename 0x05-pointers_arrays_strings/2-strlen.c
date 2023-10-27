#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string value to be counted
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length++);
}
