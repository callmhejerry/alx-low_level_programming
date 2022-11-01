#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <elf.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
  * check_elf - A funciton that checks if a file is an elf file
  * @elf_file: the file to check
  * Return: 1 if it is an elf file , else return 0
  */
int check_elf(char *elf_file)
{
	if (elf_file[0] == ELFMAG0 && elf_file[1] == ELFMAG1 &&
			 elf_file[2] == ELFMAG2 &&
			 elf_file[3] == ELFMAG3)
		return (1);
	return (0);
}

/**
  * print_magic - A fucntion that prints a magic line
  * @elf_file: the file to print
  * Return: void
  */
void print_magic(char *elf_file)
{
	int i;

	printf(" Magic:\t\t");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_file[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

/**
  * print_class - A fucntion that prints a class line
  * @elf_file: the file to print
  * Return: void
  */
void print_class(char *elf_file)
{
	printf(" Class:\t\t\t\t\t");
	switch (elf_file[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
	}
}
/**
  * print_data - A function that prints a data line
  * @elf_file: the file to print
  * Return: void
  */
void print_data(char *elf_file)
{
	printf(" Data:\t\t\t\t\t");
	switch (elf_file[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("Unknown data format\n");
			break;
	}
}
/**
  * print_version - A fucntion that prints the version line
  * @elf_file: the file to print
  * Return: void
  */
void print_version(char *elf_file)
{
	printf(" Version:\t\t\t\t");
	switch (elf_file[EI_VERSION])
	{
		case EV_NONE:
			printf("Invalid ELF version\n");
			break;
		case EV_CURRENT:
			printf("1 (current)\n");
			break;
	}
}
/**
  * print_osabi - A function to pritnt the os/abi line
  * @elf_file: the file to print
  * Return: void
  */
void print_osabi(char *elf_file)
{
	printf(" OS/ABI:\t\t\t\t");
	switch ((unsigned int)elf_file[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("UNIX - ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("UNIX Stand-alone (embedded)\n");
			break;
		default:
			printf("<unknown: 53>\n");
			break;
	}
}

/**
  * print_abi_version - A function ton print the abi version line
  * @elf_file: the file to print
  * Return: void
  */
void print_abi_version(char *elf_file)
{
	printf(" ABI Version:\t\t\t\t%i\n", (int)elf_file[EI_ABIVERSION]);
}

/**
  * print_type - A function that prints the type line
  * @elf_file: the file to print
  * Return: void
  */
void print_type(char *elf_file)
{
	printf(" Type:\t\t\t\t\t");
	switch (elf_file[16])
	{
		case ET_NONE:
			printf("NONE\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
	}
}

/**
  * print_entry: A function to print the entry line
  * @elf_file: the file to print
  * Return: void
  */
void print_entry(char *elf_file)
{
	printf(" Entry point address:\t\t\t\t\t%c\n", elf_file[24]);
}

/**
  * print_elf_file - A fucntion that prints an elf_file
  * @elf_file: the file to be printed
  * Return: void
  */
void print_elf_file(char *elf_file)
{
	printf("ELF Header:\n");
	print_magic(elf_file);
	print_class(elf_file);
	print_data(elf_file);
	print_version(elf_file);
	print_osabi(elf_file);
	print_abi_version(elf_file);
	print_type(elf_file);
	print_entry(elf_file);
}
/**
  * main - A program that displays the information
  * contained in the ELF header at the start of an ELF file
  * @argc: the total number of arguments passed
  * @argv: the array of arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int fd_elf, rd;
	char hdr[32];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Invalid use of %s\n", argv[0]);
		exit(98);
	}
	fd_elf = open(argv[0], O_RDONLY);
	if (fd_elf < 0)
	{
		dprintf(STDERR_FILENO, "Sorry an error occured\n");
		exit(98);
	}
	rd = read(fd_elf, hdr, 32);
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Sorry an error occured\n");
		exit(98);
	}
	if (check_elf(hdr) == 0)
	{
		dprintf(STDERR_FILENO, "Please input a valid elf file\n");
		exit(98);
	}
	print_elf_file(hdr);
	return (0);
}
