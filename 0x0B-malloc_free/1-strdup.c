#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory,
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{

	char *aaa;
	int a, c = 0;


	if (str == NULL)
		return (NULL);

	a = 0;

	while (str[a] != '\0')
		a++;


	aaa = malloc(sizeof(char) * (a + 1));


	if (aaa == NULL)
		return (NULL);


	for (c = 0; str[c]; c++)
		aaa[c] = str[c];

	return (aaa);
}
