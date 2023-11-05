#include "main.h"

/**
 * cap_string - captalizes first words in a string
 * @str: pointer
 * Return: pointer
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = {32, 44, 59, '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	for (j = 0; sep[j] != '\0'; j++)
	{
		if (sep[j] == str[i] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	}
	return (str);
}
