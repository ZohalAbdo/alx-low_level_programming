#include <stdio.h>

/**
 * main - prints all single digit base 10 starting from 0,
 * followed new line, use putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
