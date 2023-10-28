#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: string to be tested
 * Return: void
 */

void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char swap;

	if (s == NULL)
	{
		return;
	}
	if (s[0] == '\0')
	{
		return;
	}
	while (s[end] != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		swap = s[start];
		s[start] = s[end];
		s[end] = swap;
		start++;
		end--;
	}
}
