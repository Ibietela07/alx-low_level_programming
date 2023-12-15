#include "main.h"

/**
 * get_endianness - to check the system Byte order
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int a = 1;
	int little_or_big;

	little_or_big = (int) (((char *)&a)[0]);
	return (little_or_big);
}
