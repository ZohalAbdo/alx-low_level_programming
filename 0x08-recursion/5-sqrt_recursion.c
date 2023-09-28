#include "main.h"
/*
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: n
 * @b: number that iterates from 1 to n
 *
 * Return: int
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: Number value
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
