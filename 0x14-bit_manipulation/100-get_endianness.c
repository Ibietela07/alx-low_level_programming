#include "main.h"
#include "stdio.h"

/*
 *_get_endianness - A function that checks the endianness
 *
 *Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
