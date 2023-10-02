#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers
 * @argc: The number of command line argument
 * @argv: Array that contains the command line argument
 * Return: (0) When it is successful
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
