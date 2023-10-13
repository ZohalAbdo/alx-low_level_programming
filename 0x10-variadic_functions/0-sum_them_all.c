#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of argument
 *
 *Return:int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list X;

	sum = 0;

	va_start(X, n);
	for (i = 0; i < n; i++)
		sum = va_arg(X, int) + sum;
	va_end(X);

	return (sum);
}
