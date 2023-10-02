#include "main.h"
/**
 *_isdigit - A function that is used to check for digits
 *
 *@c: character to be checked
 *
 *Return: (1) if c is a digit and (0) if not
 *
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
