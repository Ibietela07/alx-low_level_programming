#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: The number of the command line arguments.
 * @argv: the array that contain the program command line arg.
 * Return: (0) when it is successful
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
