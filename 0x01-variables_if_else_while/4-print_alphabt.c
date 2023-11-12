#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if ((a != 'q') && (a != 'e'))
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
