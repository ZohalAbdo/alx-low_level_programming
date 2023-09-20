#include <stdio.h>

/**
 * main - computes & prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum3, sum5, total_sum;
	int i;

	sum3 = 0;
	sum5 = 0;
	total_sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		} else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	total_sum = sum3 + sum5;
	printf("%lu\n", total_sum);
	return (0);
}
