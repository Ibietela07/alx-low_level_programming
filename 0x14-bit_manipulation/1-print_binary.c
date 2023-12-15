#include "main.h"
#include "stdio.h"

/**
 * _pow - a function that calculates (base ^ power)
 *
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (divisor)
	{
	if (n & divisor)
	{
		flag = 1;
		putchar('1');
	}
	else if (flag)
	{
		putchar('0');
	}
	divisor >>= 1;
	}

	if (!flag)  /* Handle the case when n is 0 */
	putchar('0');
}
