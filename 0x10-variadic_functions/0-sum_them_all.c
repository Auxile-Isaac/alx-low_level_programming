#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all the parameters.
 * @x: amount of the arguments.
 *
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int x, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	while (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(valist, int);

	va_end(valist);

	return (sum);
}
