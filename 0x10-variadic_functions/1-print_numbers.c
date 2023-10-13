#include "variadic_functions.h"
/**
 * print_numbers -  a function that prints numbers, followed by a new line
 * @separator: to separate the numbers
 * @n: number of int passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b, arr;

	va_list ptr;

	va_start(ptr, n);

	for (b = 0; b < n; b++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
