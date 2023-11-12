#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int z = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
