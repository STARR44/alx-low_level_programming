#include "main.h"

/**
 * string_toupper - changes all lower case of a string to upper case
 * @p: pointer
 * Return: p
 */

char *string_toupper(char *p)
{
	int k;

	for (k = 0; k[p] != '\0'; k++)
	{
		if (k[p] >= 97 && k[p] <= 122)
		{
			k[p] = k[p] - 32;
		}
	}
	return (p);
}
