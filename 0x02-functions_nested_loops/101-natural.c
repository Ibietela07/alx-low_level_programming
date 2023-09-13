#include <stdio.h>

/**
 * print_times_table - Compute and print
 * the sum of multiples of 3 or 5 below 1024
 *
 *
 * Return: Always 0.
 */


void print_times_table(void)
{
	int sum = 0

	for (int 1 - 0; i < 1024; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
	sum += i;
	}
	}

	printf("%d\n", sum);

}

int main(void)
{
	print_times_table();
	return (0);
}
