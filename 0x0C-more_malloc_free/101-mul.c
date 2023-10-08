#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - A program that mutiplies two positive numbers
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, otherwisw 0.
 */
int is_digit(char *str)
{
	while (*str)
	{
	if (*str < '0' || *str > '9')
	return (0);
	str++;
	}
	return (1);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 if successful, 98 if there is an error.
 */
int is_digit(char *str);

int main(int argc, char *argv[])
{
	unsigned long num1, num2;

	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
	printf("Error\n");
	return (98);
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);

	printf("%lu\n", num1 * num2);

	return (0);
}
