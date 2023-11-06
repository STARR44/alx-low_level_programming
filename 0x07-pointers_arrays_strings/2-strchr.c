#include "main.h"

/**
 * _strchr - checks for a character in a string
 * @c: character to be checked
 * @s: pointer
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
