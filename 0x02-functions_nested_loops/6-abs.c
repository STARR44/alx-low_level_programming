#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @num: character to be tested
 * Return: -num, +num
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
