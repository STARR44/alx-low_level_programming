#include "main.h"

/**
 * _strcmp - a function that compares
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[1] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s2[i] < s1[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
