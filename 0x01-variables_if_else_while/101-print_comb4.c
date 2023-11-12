#include <stdio.h>

/**
 * main - A program that prints different combination of three digits
 * Return: Always 0
 */
int main(void)
{
	int b = 0;
	int j;
	int d;

	while (b <= 7)
	{
		j = b + 1;
	while (j <= 8)
	{
		d = j + 1;
	while (d <= 9)
	{
		putchar(b + '0');
		putchar(j + '0');
		putchar(d + '0');
		if (b < 7 || j < 8 || d < 9)
		{
			putchar(' ');
			putchar(',');
		}
		d++;
		}
		j++;
	}
	b++;
	}
	putchar('\n');
	return (0);
}
