#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: pointer
 */

char *leet(char *str)
{
	int i, j;
	char b[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (str[i] == b[j])
			{
				str[i] = d[j];
			}
		}
	}
	return (str);
}
