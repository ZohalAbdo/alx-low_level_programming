#include "variadic_functions.h"
/**
 *print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 *Return:void.
 */
void print_numbers(const unsigned int n, ...)
{
	unsigned int i;
	va_list countptr;

	va_start(countptr, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(countptr, int));
	}
	va_end(countptr);
	printf("\n");

}
