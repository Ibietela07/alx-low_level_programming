#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 *
 * @nmemb: number of block memory
 * @size: size of the components (int)
 *
 * Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;
	return (p);
}
