#include "main.h"
/**
 * prime2 - Makes possible to evaluate from 1 to n
 * @a: n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * error: 0
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - function that returns 1 if the input integer is a prime number, otherwise return 0
 * @n: int number
 *
 * Return: On success 1.
 * error: -1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
