#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *
 * @f: value for holding the string name
 * @name: name of the individual
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
