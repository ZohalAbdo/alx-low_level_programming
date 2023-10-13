#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 *Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list X;

	va_start(X, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		string = va_arg(X, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
	}
	va_end(X);
	printf("\n");
}
