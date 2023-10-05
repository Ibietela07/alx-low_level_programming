#include <stdlib.h>
#include "main.h"
/**
 *count_word - a function to help count the number of words in a string
 * @s: string to evaluate
 *Return: number of words
 */
int count_word(char *s)
{
		int flag, a, i;

		flag = 0;
		i = 0;

		for (a = 0; s[a] != '\0'; a++)
		{
		if (s[a] == ' ')

		flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			i++;
		}
		}

			return (i);
}
/**
 * **strtow - spliting a string into words
 * @str: the string to split:wq
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int j, k = 0, len = 0, words, c = 0, start, end;
	int a = 0;

	while (*(str + len))
		len++;
	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (a)
			{
				end = j;
				tmp = (char *) malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - a;
				k++;
				a = 0;
			}
		}
		else if (c++ == 0)
			start = j;
	}
	matrix[k] = NULL;
	return (matrix);
}
