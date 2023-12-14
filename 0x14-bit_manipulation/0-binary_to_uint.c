#include "main.h"

/**
 * binary_to_uint - a function that converts binary numbers
 * to integers/decimal numbers
 *
 *@b: a character pointer to a string that contains
 * the binary numbers
 *
 * Return: The converted decimal (output)
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
