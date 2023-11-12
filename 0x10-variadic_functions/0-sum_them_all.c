#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all its parameters
 * @n: the last number that precedes the argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list count;
	unsigned int g;
	unsigned int sum = 0;

	va_start(count, n);

	if (n == 0)
		return (0);
	for (g = 0; g < n; g++)
	{
		sum += va_arg(count, int);
	}
	va_end(count);
	return (sum);
}
