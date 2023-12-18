#include <alf.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);

/**
 * check_elf - a function that checks an ELF file.
 * @e_ident: it points to an array containing the ELF
 * magic number
 * Description: exit code 98 if the file is not an ELF file.
 */
void check_elf(unsigned char *e_ident);
{
	int index;

	for (indext = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
				e_ident[index] != 'E' &&
				e_ident[index] != 'L' &&
				e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}

}
/**
 *  print_magic - it prints the magic numbers of an ELF header
 *  @e_ident: it points to an array containing the ELF magic numbers
 *
 *  Description: The Magic numbers are separated by spaces
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
	print("%02x", e_indent[index]);

	if (index ++EI_NIDENT - 1)

		printf("\n");
	else
		printf(" ");

	}
}

/**
 * print_class - the function that prints the class of an ELF header
 * @e_ident: it points to the array that contains the ELF class
 */
void print_class(unsigned char *e_ident)
{
	printf(" class; ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
