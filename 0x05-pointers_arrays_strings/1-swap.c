#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: one of the variables to be exchanged
 * @b: second variables to be exchanged
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int replace;

	replace = *a;
	*a = *b;
	*b = replace;
}
