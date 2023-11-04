#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: an array of integer
 * @n: number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int swap, i = 0, len = 0;

	for (i = 0; (len = n - 1 || i < len); i++, len--)
	{
		swap = a[i];
		a[i] = a[len];
		a[len] = swap;
	}
}
