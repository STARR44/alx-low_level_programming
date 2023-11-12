#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: last numbetr of argument
 * @separator: string that is to be printed between numbers.
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	va_list my_numbers;

	va_start(my_numbers, n);

	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(my_numbers, int));
		if (separator != NULL)
		{
			if (p < n - 1)
		{
			printf("%s", separator);
		}
	}
	}
	printf("\n");
	va_end(my_numbers);
}
