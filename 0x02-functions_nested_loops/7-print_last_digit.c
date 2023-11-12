#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: the character to be tested
 * Return: the value of the last digit
 */

int print_last_digit(int num)
{
	int d;

	d = num % 10;
	if (num < 0)
		d = -d;
	_putchar(d + '0');
	return (d);
}
