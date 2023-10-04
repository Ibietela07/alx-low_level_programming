#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of characters.
 *
 * @size: form the size of the array
 * @c: For storing the string of characters
 *
 * Return: pointer to array, and NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i;



	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)


	return (NULL);



	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);


}
