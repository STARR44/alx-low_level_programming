#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that gives the reverse of a string
 * @s: string to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int counter = 0;
	int i;

	if (s == NULL)
	{
		return;
	}

	while (s[counter] != '\0')
	{
		counter++;

	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
