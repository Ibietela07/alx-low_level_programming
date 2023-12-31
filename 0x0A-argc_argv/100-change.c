#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: (0) when successful, (1) is there is an error
 */

int main(int argc, char *argv[])
{
	int num, n, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)

	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)

	{
		printf("0\n");
		return (0);
	}

	for (n = 0; n < 5 && num >= 0; n++)

	{
		while (num >= coins[n])
		{
			result++;
			num -= coins[n];
		}

	}

	printf("%d\n", result);
	return (0);

}
