#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: used to separate the strings between strings
 * @n: number of springs to be printed
 * Return: void
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	char *str;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (s = 0; s < n; s++)
	{
		str = va_arg(ptr_str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", str);
		}
		if (s != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}
