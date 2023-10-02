#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 *
 * @argc: The number ofthe command line argument.
 * @argv: Array that contains the program line arguments
 *
 * Return: (0) When successful.
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
