#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its arguments
 * @n: The number of argguments passed into the function
 * @...: A variable number of arguments to calculate the sum of.
 * Return: sum otherwise NULL if n equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	va_start(list, n);

	unsigned int i,
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

