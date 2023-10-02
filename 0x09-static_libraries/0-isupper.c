#include "main.h"
/**
 *isupper - A function that checks for uppercase character
 *
 *@c:Input the character
 *
 *Return: (1) if uppercase and (0) if not
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{

		return (1);

	}
	else
	{
		return (0);
	}
}
