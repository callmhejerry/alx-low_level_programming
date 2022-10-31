#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
void check_fd_to(int fd_to, char *filename);
void check_fd_from(int fd_From, char *filename);
/**
  * main - A program that copies the content
  * of a file to another file
  * @argc: the number of arguments passed
  * @argv: the array of arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd;
	char buffer[1024];
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		check_fd_from(fd_from, argv[1]);
	fd_to = open(argv[2], O_WRONLY);
	if (fd_to < 0)
	{
		fd_to = open(argv[2], O_WRONLY | O_CREAT, 0674);
		check_fd_to(fd_to, argv[2]);
	}
	else
		truncate(argv[2], 0);
	rd = 1024;
	while (rd == 1024)
	{
		rd = read(fd_from, buffer, sizeof(buffer));
		if (rd < 0)
			check_fd_from(fd_from, argv[1]);
		if (write(fd_to, buffer, rd) < 0)
			check_fd_to(fd_to, argv[2]);
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				 argv[1]);
		exit(98);
	}
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

/**
  * check_fd_to - A function that checks if the file that is copied
  * to fd_to is succesful
  * @fd_to: the file decription for the file
  * @filename: the filename for the file
  * Return: void
  */
void check_fd_to(int fd_to, char *filename)
{
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
  * check_fd_from - A fucntion that checks if the file that is copied
  * to fd_from is successful
  * @fd_from: the file description for the file
  * @filename: the filename for the file
  * Return: void
  */
void check_fd_from(int fd_from, char *filename)
{
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				 filename);
		exit(98);
	}
}
