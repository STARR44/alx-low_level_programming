#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: last argument
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;

	va_list count;

	va_start(count, n);
	for (unsigned int i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(count, int);
		}
	}
	va_end(count);
	return (sum);
}
