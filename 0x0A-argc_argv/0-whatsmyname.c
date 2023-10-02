#include <stdio.h>
/**
 * main - It prints its name, followed by a new line
 *
 * @argc: number of the command line arguments.
 * @argv: an array that contains the command line arguments
 *
 * Return: (0) When it is successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
