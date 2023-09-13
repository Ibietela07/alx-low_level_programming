#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program calculates and prints the first 98 Fibonacci
 * numbers, separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum;
	unsigned long fib1_half1, fib2_half1, fib2_half2
	unsigned long half1, half2;
	int count;

	printf("%lu, %lu, ", fib1, fib2);

	for (count = 2; count < 98; count++)
	{
	sum = fib1 + fib2;

	if (count != 97)
	{

	printf("%lu, ", sum);

	}
	else
	{
	printf("%lu\n", sum);
	}

	fib1 = fib2;

	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;

	half1 = fib1_half1 + fib2_half1;
	half2 = fib1_half2 + fib2_half2;

	if (fib1_half2 + fib2_half2 > 9999999999)
	{

	half1 += 1;
	half2 %= 10000000000;

	}

	fib1 = half1;
	fib2 = half2;

	}

	return (0);
}
