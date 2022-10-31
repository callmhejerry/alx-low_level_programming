#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * main - A program that copies the content
  * of a file to another file
  * @argc: the number of arguments passed
  * @argv: the array of arguments
  * return: 0
  */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				 argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_RDWR | O_CREAT | O_EXCL, 0666);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				 argv[2]);
		exit(99);
	}
	while ((rd = read(fd_from, buffer, 1024)) > 0)
		write(fd_to, buffer, rd);
	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to);
		exit(100);
	}
	return (0);
}
