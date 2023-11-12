#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int azeez = 0;
	int bola = 'a';

	while (azeez <= 9)
	{
		putchar(azeez + '0');
		azeez++;
	}
	while (bola <= 'f')
	{
		putchar(bola);
		bola++;
	}
	putchar('\n');
	return (0);
}
