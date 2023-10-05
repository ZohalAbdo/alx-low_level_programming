#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * 
 * @argc: argument count
 * @argv: argument value
 * 
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cents , num_coins , min_coins , i;
	int *coins;

	if (argc != 2) {
		printf("Error\n");
		return 1;
	}

	cents = atoi(argv[1]);

	if (cents < 0) {
		printf("0\n");
		return 0;
	}

	coins[] = {25, 10, 5, 2, 1};
	num_coins = sizeof(coins) / sizeof(coins[0]);
	min_coins = 0;

	for (i = 0; i < num_coins; i++) {
		while (cents >= coins[i]) {
			cents -= coins[i];
			min_coins++;
		}
	}

	printf("%d\n", min_coins);

	return 0;
}
