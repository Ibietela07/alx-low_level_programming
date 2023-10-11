#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name
 *
 * @f: value for holding the string name
 * @name: name of the individual
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
