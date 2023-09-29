#include "main.h"
/**
 * factorial - to return the factorials; of a given number
 *
 * @n: factorialise a factor
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{

	return (1);

	}
	else if (n < 0)
	{
	return (-1);
	}
	return (n * factorial(n - 1));
}
