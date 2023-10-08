#include "main.h"
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers
 *
 * @min: minimum value of int
 * @max: maximum value of int
 *
 * Return: int pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int j, i;
	int *c;

	if (min > max)
		return (NULL);
	i = max - min + 1;

	c = malloc(sizeof(int) * i);
	if (c == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
	c[j] = min;
	min++;
	}
	return (c);
}
