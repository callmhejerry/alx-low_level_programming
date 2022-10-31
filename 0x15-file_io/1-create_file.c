#include <unistd.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
  * read_textfile - A function that reads a text file
  * and prints it to the POSIX standard output
  * @filename: the name of the file name to read from
  * @letters: the number of letters it should read and print
  * Return: numbers of letters printed, or 0 if failed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_filename, rd, wr;
	char buffer[letters];

	if (filename == NULL)
		return (0);
	fd_filename = open(filename, O_RDONLY);
	if (filename < 0)
		return (0);
	rd = read(fd_fiilename, buffer, letters);
	if (rd < 0)
		return (0);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr < 0)
		return (0);
	return (wr);
}
