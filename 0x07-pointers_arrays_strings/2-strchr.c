#include "main.h"

/**
 * _strchr - checks for a character in a string
 * @c: character to be checked
 * @s: pointer
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int e = 0;

	for (; s[e] >= '\0'; e++)
	{
		if (s[e] == c)
		{
			return (&s[e]);
		}
	}
	return ('\0');
}
