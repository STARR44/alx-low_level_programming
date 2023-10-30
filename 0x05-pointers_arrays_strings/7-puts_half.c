#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half -  a function that prints half of a string, followed by a new line
 * @str: string to be evaluated
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		int n = (len - 1) / 2;

		for (i = n + 1; str[1] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
