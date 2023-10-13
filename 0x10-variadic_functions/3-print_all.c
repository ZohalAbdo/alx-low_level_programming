#include "variadic_functions.h"
/**
 * print_char - prints char
 * @arg: list to give
 * Return: always 0
 */
int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
	return (0);
}
/**
 * print_int - prints int
 * @arg: list to give
 * Return: always 0
 */
int print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
	return (0);
}
/**
 * print_float - prints float
 * @arg: list to give
 * Return: always 0
 */
int print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
	return (0);
}
/**
 * print_str - prints string
 * @arg: list to give
 * Return: always 0
 */
int print_str(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", s);
	return (0);
}
/*
 *print_all - function that prints anything.
 *@format: a list of types of arguments passed to the function
 *
 *Return:void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separate1 = "";
	char *separate2 = ", ";
	va_list arg;
	zzz ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_str},
		{"f", print_float},
		{NULL, NULL}
	};

	va_start(arg, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].f != NULL)
		{
			if (format[i] == *(ops[j].c))
			{
				printf("%s", separate1);
				ops[j].f(arg);
			}
			j++;
		}
		separate1 = separate2;
		i++;
	}
	printf("\n");
	va_end(arg);
}
