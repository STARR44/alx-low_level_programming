#include "main.h"
#include <stdio.h>

/**
 * _puts - A function that prints a string, followed by a new line, to stdout
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
