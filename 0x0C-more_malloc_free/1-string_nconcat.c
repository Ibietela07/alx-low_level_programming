#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings while
 * the second string is an n value
 *
 * @s1: string one
 * @s2: string two
 * @n: number of components to concatenate from s2
 *
 * Return: the pointer to the newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *s;

	if (s1 == NULL)
		a = 0;
	else
	{
	for (a = 0; s1[a] != '\0'; a++)
		;
	}

	if (s2 == NULL)
		b = 0;
	else
	{
	for (b = 0; s2[b] != '\0'; b++)
		;
	}
	if (b > n)
		b = n;
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		s[c] = s1[c];
	for (c = 0; c < b; c++)
		s[c + a] = s2[c];
	s[a = b] = '\0';
	return (s);
}
